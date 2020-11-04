// Problem Statement: https://www.techiedelight.com/find-size-largest-square-sub-matrix-1s-present-given-binary-matrix/
// Find the size of the largest square sub-matrix of 1's present in a given matrix consisting only of 0's and 1's
#include <bits/stdc++.h>
#define lli long long int
#define ull unsigned long long
using namespace std;
template<typename A,typename B>
inline A fast_power(A x,B y){if(y<=1)return x;A k=fast_power(x,y/2);k=k*k;if(y%2==1)k=k*x;return k;}
template<typename A>
inline int gcd(A a,A b){A t;while((a!=0)&&(b!=0)){t=a%b;a=b;b=t;}return a+b;}
template<typename A,typename B>
inline lli ncr(A x,B r){lli top=1,bot=1;while(r>=1){top*=(x-r+1);bot*=r;r--;} return top/bot;}
template<typename A>
inline pair<A,int> kadane(A x[], int n) {
    A max_so_far = -9999999999999, max_ending_here = 0; int h = 0;
    for(int i=0;i<n;i++) { max_ending_here += x[i];
        if(max_so_far < max_ending_here) { max_so_far = max_ending_here; h = i; }
        if(max_ending_here < 0) max_ending_here = 0;}
    return make_pair(max_so_far,h);
}
struct custom_hash
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    { auto hash1 = hash<T1>{}(p.first); auto hash2 = hash<T2>{}(p.second); return hash1 ^ hash2; }
    template <typename T1>
    size_t operator()(const T1& p) const
    { auto hash1 = hash<T1>{}(p); return hash1;
        /* auto hash2 = hash<T1>{}(p.first); return hash1^hash2; */ }
};
const int MX = 1000;
int D[MX+1][MX+1];
int n,m;
void solve()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> D[i][j];
    int mx = 0;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(D[i-1][j-1] != 0 && D[i-1][j] != 0 && D[i][j-1] != 0 && D[i][j] != 0)
                D[i][j] = 1 + min(D[i-1][j-1],min(D[i][j-1],D[i-1][j]));
            mx = max(mx,D[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout <<  D[i][j] << " ";
        cout << "\n";
    }
    cout << mx << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}
