#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long
#define MX 100000

using std::cin;
using std::cout;
using std::cerr;
using std::floor;
using std::ceil;
using std::vector;
using std::ios_base;
using std::unordered_map;
using std::map;
using std::endl;
using std::stack;
using std::queue;
using std::max;
using std::min;
using std::deque;
using std::bitset;
using std::set;
using std::sort;
using std::hash;
using std::pair;
using std::make_pair;
using std::string;
using std::swap;
using std::hash;
int n,q,l[MX],r[MX],a[MX];

int searchRange(int start,  int end)
{
    for(int i=start;i <= end;i++)
    {

    }
}


void eachTest()
{
    cin >> n;
    int freq[n+1];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        freq[a[i]] = i;
    }
    int srt[n];
    for(int i=n;i>1;i--)
    {
        int h,x = freq[i],y = freq[i-1];
        if(y < x)
        {
            h = searchRange(y,x);
        }
        
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
        eachTest();
    return 0;
}
