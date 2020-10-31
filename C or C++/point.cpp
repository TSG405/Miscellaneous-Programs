#include <bits/stdc++.h>
#include <boost/lexical_cast.hpp>
#define lli long long int
#define ull unsigned long long
#define MX 100000

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
using std::stoi;
using boost::lexical_cast;
struct Solution
{
    int D[10][10][10][10];
    int findNode[4];
    void initFind(int i,int j,int k,int l)
    {
        findNode[0] = i;
        findNode[1] = j;
        findNode[2] = k;
        findNode[3] = l;
    }
    int calculate(int i,int j,int k,int l)
    {
        
    }
    int openLock(vector<string> & deadends, string targets)
    {
        int t1,t2,t3,t0;
        for(int i=0;i<10;i++)
        {
            for(int j = 0;j < 10;j++)
            {
                for(int k = 0; k < 10;k++)
                {
                    for(int l = 0;l < 10;l++)
                        D[i][j][k][l] = INT_MAX;
                }
            }
        }
        for(int i=0;i<(int)deadends.size();i++)
        {
            t3 = boost::lexical_cast<int>(deadends[i][3]);
            t2 = boost::lexical_cast<int>(deadends[i][2]);
            t1 = boost::lexical_cast<int>(deadends[i][1]);
            t0 = boost::lexical_cast<int>(deadends[i][0]);
            D[t0][t1][t2][t3] = INT_MAX;
        }
        t3 = boost::lexical_cast<int>(targets[3]);
        t2 = boost::lexical_cast<int>(targets[2]);
        t1 = boost::lexical_cast<int>(targets[1]);
        t0 = boost::lexical_cast<int>(targets[0]);
        initFind(t0,t1,t2,t3);
        return D[t0][t1][t2][t3];
    }
};

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> deadends;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        
    }
    
    return 0;
}
