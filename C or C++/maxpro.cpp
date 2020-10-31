#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long
#define MX 10000

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
int n;
int a[2*MX];

void solve()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    lli prd = 1;
    int crmx = -9999;
    int c[5];
    for(int i=0;i<5;i++)
    {
        crmx = max(crmx,a[i]);
        prd *= a[i];
        c[i] = a[i];
    }
    
    for(int i=5;i<n;i++)
    {
        //section check
        long long cmx = prd;
        sort(c,c+5);
        for(int j=0;j<5;j++)
        {
            lli cm = 0;
            if(prd*(a[i]/c[j]) > prd)
            {
                prd = prd*(a[i]/c[j]);
                c[j] = a[i];
                i++;
            }
        }
    }
    cout << crmx << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
        solve();
    return 0;
}
