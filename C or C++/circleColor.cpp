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
int a[100],b[100],c[100];
void solve()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    for(int i=0;i<n;i++)
        cin >> c[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i-1] == a[i%n])
            a[i%n] = b[i%n];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i-1] == a[i%n])
            a[i%n] = c[i%n];
    }
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
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
