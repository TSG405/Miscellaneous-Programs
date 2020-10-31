#include <iostream>
#include <cmath>
using namespace std;

//Enter the number of elements

class Box
{
    private:
        double length,breadth,height;
    public:
        double findDiagonal();
        void assignStuff(double l, double b, double h)
        {
            length = l;
            breadth = b;
            height = h;
        }
        double getLength()
        {
            return length;
        }
        double getBreadth()
        {
            return breadth;
        }
        double getHeight()
        {
            return height;
        }
};
double Box::findDiagonal()
{
    return sqrt(pow(length,2) + pow(breadth,2) + pow(height,2));
}
int main()
{
    Box bx;//reference type variable
    cout << "Accept the dimensions of the box: " << endl;
    cout << "Enter the length = ";
    double l,h,b;//initialising the variables to be initialised into the class
    cin >> l;
    cout << "Enter the breadth = ";
    cin >> b;
    cout << "Enter the height = ";
    cin >> h;
    cout << "SUCESSFULLY ACCEPTED THE DIMENSIONS OF THE BOX" << endl;
    bx.assignStuff(l,b,h);
    cout << "Volume = " << bx.getHeight()*bx.getLength()*bx.getBreadth() << endl;
    cout << "Largest diagonal = " << bx.findDiagonal();
    return 0;
}
