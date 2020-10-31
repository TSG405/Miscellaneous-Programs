#include <bits/stdc++.h>
#include <ios>

#define lli long long int
#define ull unsigned long long
#define MX 10000

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::max;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::nanoseconds;
int m;
int a[MX];
int D[MX][MX];

int solve(int l,int r)
{
    if(D[l][r] > 0)
        return D[l][r];
    D[l][r] = a[r]*m;
    if(l < r)
        D[l][r] = max(solve(l+1,r) + ((m-1)-(r-l-1))*a[l], solve(l,r-1) + ((m-1)-(r-1-l))*a[r]);
    //cerr << "D[" << l << "][" << r << "] = " << D[l][r] << endl;
    return D[l][r];
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m;
    for(int i=0;i<m;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            D[i][j] = 0;
    auto start = std::chrono::high_resolution_clock::now();
    cout << solve(0,m-1) << endl;
    auto end = std::chrono::high_resolution_clock::now();
    double tme = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    tme *= 1e-6;
    //cout << "n = " << m << " -> time = " << std::fixed << tme << std::setprecision(9) << " milliseconds";
    return 0;
}
