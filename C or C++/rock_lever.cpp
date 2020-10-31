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
int n,cnt;
long long a[MX];
void MergeAndCalc(int low, int high, int mid)
{
    long long i=low,j=mid+1;
    while(i <= mid && j <= high)
    {
        if(i < j && (a[i]&a[j]) >= (a[i]^a[j]))
            cnt++;
        else
            j++;
    }
    while(i <= mid)
    {
        if(i < j && (a[i]&a[j]) >= (a[i]^a[j]))
            cnt++;
        else
            i++;
    }
}




void SplitHead(int s, int e)
{
    int mid = (s+e)/2;
    SplitHead(s,mid);
    SplitHead(mid+1,e);
    MergeAndCalc(e,s,mid);
}

void solve()
{
    cnt = 0;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
        solve();
    return 0;
}
