#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long
#define MX 1000

using std::cin;
using std::cout;
using std::cerr;
using std::floor;
using std::ceil;
using std::vector;
using std::unordered_map;
using std::map;
using std::endl;
using std::stack;
using std::queue;
using std::max;
using std::min;
using std::deque;
using std::priority_queue;
using std::bitset;
using std::set;
using std::sort;
using std::hash;
using std::pair;
using std::make_pair;
using std::string;
using std::swap;
using std::hash;

int n,m;
int robber[MX][2],searchlight[MX][2];
void solve()
{
    cin >> n >> m;
    //int rob_x=n,rob_y=n;
    int src_x=-1,src_y=-1;
    for(int i=0;i<n;i++)
    {
        cin >> robber[i][0] >> robber[i][1];
        //rob_x = min(robber[i][0],rob_x);
        //rob_y = min(robber[i][1],rob_y);
    }
    for(int i=0;i<m;i++)
    {
        cin >> searchlight[i][0] >> searchlight[i][1];
        src_x = max(src_x,searchlight[i][0]);
        src_y = max(src_y,searchlight[i][1]);
    }
    int calx = INT_MIN,caly=INT_MIN;
    for(int i=0;i<n;i++)
    {
        calx = max(calx,src_x-robber[i][0]);
        caly = max(caly,src_y-robber[i][1]);
    }
    cout << max(calx,caly) << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    for(int i=0;i<t;i++)
        solve();
    return 0;
}
