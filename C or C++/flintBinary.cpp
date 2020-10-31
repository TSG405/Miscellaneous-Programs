#include <iostream>
#include <bits/c++io.h>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    long long int d[t];
    for(int i=0;i<t;i++)
    {
        cin >> n;
        int coeff[n];
        bool breakout=false;
        long long int val=0;
        int countdigits=0;
        for(int j=0;j<n && !breakout;j++)
        {
            long long int addend = pow(2,j);
            if((val+addend)%((long long int)pow(10,countdigits)) != 0)
                val += addend;
            else
            {
                if(countdigits < n+1)
                {
                    val += addend;
                    countdigits++;
                }
                else
                    breakout = true;
            }
        }
        while(val%((long long int)pow(10,countdigits)) == 0)
            val *= 2;
        val /= 2;
        d[i] = val;
    }
    for(int i=0;i<t;i++)
        cout << d[i] << endl;
    return 0;
}
