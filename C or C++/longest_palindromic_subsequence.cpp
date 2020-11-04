#include <bits/stdc++.h>
// Problem: Find length of longest palindromic subsequence in a string (max. length = 1000)
// Used crude recursive strategy with DP (high memory overhead)
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
const int MX = 1000;// max length
string s;
int n;
int D[MX+1][MX+1];
int calculate(int l,int r)
{
    if(l == r || abs(l-r) == 1)
        return (s[l] == s[r])? abs(l-r)+1:1;
    if(D[l][r] != -1)
        return D[l][r];
    if(s[l] == s[r])
        D[l][r] = 2 + calculate(l+1,r-1);
    else
        D[l][r] = max(calculate(l+1,r),calculate(l,r-1));
    return D[l][r];
}
void solve()
{
    cin >> s;
    n = (int)s.length();
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            D[i-1][j-1] = -1;
    cout << calculate(0,n-1) << endl;
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
