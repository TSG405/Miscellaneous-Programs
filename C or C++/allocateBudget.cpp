#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::ios_base;
using std::endl;
#define MX 100000
int T,B,N,nH,A[MX],minH[MX];
void solve()
{
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> N >> B;
        for(int j=0;j<N;j++)
        {
            cin >> A[j];
        }

        for(int j=1;j<=B;j++)
        {
            minH[j] = B+1;
            for(int k=0;k<N;k++)
            {
                nH = minH[j-A[k]]+1;
                if(nH > minH[j])
                    minH[j] = nH;
            }
        }
        cout << minH[B] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
