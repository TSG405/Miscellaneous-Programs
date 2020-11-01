#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <ctime>

#define ms 43

using namespace std;

constexpr double cos30 = 0.86602540378;
constexpr double sin30 = 0.5;
constexpr char paints[] ="!/$%@";

struct Point2d{
    const double x,y;
};

struct Segment{
    const Point2d A,B;
    const double m,c;
    Segment(Point2d a,Point2d b):
        A((a.x<b.x?a:b)),
        B((a.x<b.x?b:a)),
        m((B.y-A.y)/(B.x-A.x)),
        c(A.y-m*A.x){}
};

bool segments_intersect(const Segment& s1,const Segment& s2){
    if(s1.m==s2.m) return false;
    if(s1.m==INFINITY||s1.m==-INFINITY){
        const double x=s1.A.x;
        if(x<s2.A.x||x>s2.B.x) return false;
        const double y=s2.m*x+s2.c;
        if(y<min(s1.A.y,s1.B.y)||y>max(s1.A.y,s1.B.y)) return false;
        return true;
    }
    if(s2.m==INFINITY||s2.m==-INFINITY){
        const double x=s2.A.x;
        if(x<s1.A.x||x>s1.B.x) return false;
        const double y=s1.m*x+s1.c;
        if(y<min(s2.A.y,s2.B.y)||y>max(s2.A.y,s2.B.y)) return false;
        return true;
    }
    const double x=(s2.c-s1.c)/(s1.m-s2.m);
    if(x<s1.A.x||x<s2.A.x||x>s1.B.x||x>s2.B.x)
        return false;
    const double y=s1.m*x+s1.c;
    if(y<min({s1.A.y,s1.B.y,s2.A.y,s2.B.y})||
       y>max({s1.A.y,s1.B.y,s2.A.y,s2.B.y}))
        return false;
    return true;
}

struct Point{
    double x,y,z;
    Point(double x,double y,double z):x(x),y(y),z(z){}
};

struct Cube{
    vector<Point>points;
    vector<Point>frontface;
    vector<Point>sideface;
    double height;
    vector<Point>bottomface;
    Cube(double height,double size,double x,double y,double z):height(height){
        double left=x-size/2,
               right=x+size/2,
               top=y+size/2,
               bottom=y-size/2-height*size,
               front=z-size/2,
               back=z+size/2;
        frontface={{left,bottom,front},
                   {left,top,front},
                   {right,top,front},
                   {right,bottom,front}};
        sideface={{right,bottom,front},
                  {right,top,front},
                  {right,top,back},
                  {right,bottom,back}};
        bottomface={{left,bottom,front},
                    {left,bottom,back},
                    {right,bottom,back},
                    {right,bottom,front}};
    }
};

inline double projectionX(const Point & p){
    return p.x*cos30+p.z*cos30;
}

inline double projectionY(const Point & p){
    return p.y+p.x*sin30-p.z*sin30;
}

void cubes(){
    vector<vector<char>>matrix(ms*2,vector<char>(ms,' '));
    const int n=rand()%3+2;//n×n pillars
    cout<<n<<"×"<<n<<endl;
    const double mid=((ms-1)/2.0)/cos30;
    const double cs=mid/n;
    const double offset=mid/(n*2.0);
    const vector<Cube>cubes=[&cs,&offset,&n](){
        vector<Cube>builder;
        for(int row=n-1;row>=0;row--){
            for(int col=0;col<n;col++){
                builder.emplace_back((double)(rand()%3),
                                   cs,
                                   offset+col*cs,
                                   2.5*cs+n*sin30*cs,
                                   offset+row*cs);
            }
        }
        return builder;
    }();
    for(const auto& c:cubes){
        vector<vector<Point>>faces{c.frontface,
                                   c.sideface,
                                   c.bottomface};
        int paint=0;
        for(const auto& f:faces){
            const vector<Segment>segments=[&f](){
                vector<Segment>builder;
                const int fs=f.size();
                for(int i=0;i<fs;i++){
                    builder.push_back(
                    Segment(
                        {projectionX(f[i]),
                        projectionY(f[i])},
                        {projectionX(f[(i+1)%fs]),
                        projectionY(f[(i+1)%fs])})
                    );
                }
                return builder;
            }();
            for(double y=0;y<2*ms;y++){
                for(double x=0;x<ms;x++){
                    int count=0;
                    for(const auto &s:segments){
                        Segment ray({-1.0,y},{x,y});
                        if(segments_intersect(s,ray)==
                        true)
                            count++;
                    }
                    if(count%2==1)
                        matrix.at(round(y))
                              .at(round(x))=paints[(int)((paint==2)?paint+c.height:paint)];
                } 
            }
            paint++;
        }
    }
    for(double y=0;y<3*cs+n*cs;y++){
        for(double x=0;x<ms;x++)
            cout<<matrix.at(y).at(x);
        cout<<endl;
    }
}

int main() {
    srand(time(0));
    for(int i=0;i<25;i++){
        cout<<i<<endl;
        cout<<string(43,'_')<<endl;
        cubes();
        cout<<string(43,'_')<<endl;
    }
    return 0;
}
