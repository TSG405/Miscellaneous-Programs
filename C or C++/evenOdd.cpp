#include <iostream>

using namespace std;
//https://codeforces.com/problemset/problem/318/A
int main()
{
    long int n,k,res=0;
    cin >> n >> k;
    if(n%2 == 0)
        n = (n-1)/2;
    else
        n = n/2;
    if(k > n)
    {
        res = 2*(k-n-1);
    }
    else
        res = 2*k - 1;
    cout << res;
    return 0;
}
