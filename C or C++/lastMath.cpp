#include <iostream>

using namespace std;


long int gcd(long int a, long int b)
{
    long int t;
    // gcd(a,b) = gcd(b,a%b)
    while((a != 0)&&(b != 0))
    {
        t = a%b;
        a = b;
        b = t;
    }
    return a+b;
}

int main()
{
    int t;
    cin >> t;
    long int st[t][2];
    for(int i=0;i<t;i++)
    {
        long int n;
        cin >> n;
        long int a,b;
        if(n%2 == 0)
        {
            a = n/2;
            b = n/2;
        }
        else
        {
            a = (n+1)/2;
            b = (n-1)/2;
        }
        long int lcm = (a*b)/gcd(a,b);
        for(int j=b;j>0;j--)
        {
            long int k = (j*(n-j))/gcd(j,n-j);
            if(lcm > k)
            {
                lcm = k;
                a = j;
            }
        }
        st[i][0] = a;
        st[i][1] = n-a;
    }
    for(int i=0;i<t;i++)
        cout << st[i][0] << " " << st[i][1] << endl;
    return 0;
}
