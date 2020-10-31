#include <iostream>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <bits/c++io.h>

using namespace std;

long gcd(long a, long b)//calculation of gcd by euclidean algorithm
{
    long t;
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
    int n,m,gc1;
    cin >> n >> m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(i == 1)
            gc1 = gcd(a[1],a[0]);
        else if(i > 1)
            gc1 = gcd(a[i],a[i-1]);
    }
    // calculate the LCM of the elements of the above array

    int upper_bound = gc1;
    for(int i=0;i<m;i++)
    {
        cin >> b[i];

    }
    
    return 0;
}
