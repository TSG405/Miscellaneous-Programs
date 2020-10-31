#include <iostream>
#include <bits/c++io.h>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int x,y,n,t;
    cin >> t;
    int res[t];
    for(int i=0;i<t;i++)
    {
        int k;
        cin >> x >> y >> n; 
        //testnum = n - x + (x%y);
        k = floor((double)(n/x))*x;
        int rem = n%x;
        
        //    rem -= y;
        if(rem > y)//7 > 5
            rem = rem + (y-rem);
        if(rem < y)
            rem = y-x; 
        k = k + rem;
        res[i] = k;
    }
    cout << "Output" << endl;
    for(int i=0;i<t;i++)
        cout << res[i] << " " << endl;
    return 0;
}
