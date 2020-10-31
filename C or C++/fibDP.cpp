#include <bits/stdc++.h>

using namespace std;

void fib(int n)
{
    int h[n];
    for(int i=0;i<n;i++)
        h[i] = 0;
    h[0] = 0;
    h[1] = 1;
    for(int i=2;i<=n;i++)
        h[i] = h[i-1] + h[i-2];
    cout << h[n] << endl;
}
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}
