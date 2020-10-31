#include <bits/stdc++.h>
//wrong solution
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
char a[10*MX],b[10*MX];
int D[10*MX+1];
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    D[0] = 0;
    int last_10 = -1;
    int last_01 = -1;
    int m2=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i-1] == b[i-1])
        {
            D[i] = D[i-1];
            cerr << "D[" << i << "] = " << D[i] << endl;
            continue;
        }
        D[i] = D[i-1] + 1;
        if(a[i-1] == 1 && b[i-1] == 0 && last_01 != -1)
        {
            m2 = D[last_01 -1] + abs(last_01 - (i-2));
            D[i] = min(D[i],m2);
            last_10 = i-1;
        }
        else if(a[i-1] == 0 && b[i-1] == 1 && last_10 != -1)
        {
            m2 = D[last_10 -1] + abs(last_10 - (i-2));
            D[i] = min(D[i],m2);
            last_01 = i-1;
        }
        if(a[i-1] == 1 && b[i-1] == 0)
            last_10 = i-1;
        else
            last_01 = i-1;
        cerr << "D[" << i << "] = " << D[i] << endl;
    }
    cout << D[n] << endl;
    return 0;
}
