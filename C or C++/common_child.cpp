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


int solve(string s,string t)
{
    int n = (int)s.size(),m=(int)t.size();
    int D[n+1][m+1];
    for (int i = 0; i < n+1; i++) 
    {
        D[i][0] = 0;
    }
    for (int i = 0; i < m+1; i++)
    {
        D[0][i] = 0;
//        cout << 0 << " ";
    }
//    cout << endl;
    for (int i = 1; i <= n; i++)
    {
//        cout << 0 << " ";
        int cnt = 0;
        for (int j = 1; j <= m; j++)
        {
            D[i][j] = max(D[i-1][j-1],max(D[i][j-1],D[i-1][j]));
            if(s[i-1] == t[j-1])
            {
                cnt++;
                D[i][j]++;
                if((j > 2 && t[j-1] == t[j-2]) || cnt > 1)
                    D[i][j]--;
            }
//            cerr << "executed D[" << i << "][" << j << "] = " << D[i][j] << endl;
//            cerr << D[i][j] << " ";
        }
//        cerr << endl;
    }
//    cerr << "D[n-1][m-1] = " << D[n-1][m-1] << endl;
    return D[n][m];
    
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,t;
    cin >> s >> t;
    cout << min(solve(t,s),solve(s,t)) << endl;
    return 0;
}
