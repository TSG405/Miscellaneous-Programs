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
    long int a,b,c,x[3];
    int t;
    cin >> t;
    long int ans[t][3];
    for(int o=0;o<t;o++)
    {
        ans[o][0] = -1;
        ans[o][1] = -1;
        ans[o][2] = -1;
        cin >> x[0] >> x[1] >> x[2];
    
        for(int i=0;i<3;i++)
        {
            a = x[i];
            for(int j=0;j<3;j++)
            {
                b = x[j];
                for(int k=0;k<3;k++)
                {
                    c = x[k];
                    if((x[0] == max(a,b))&&(x[1] == max(b,c))&&(x[2] == max(a,c)))
                    {
                        i = 3;
                        j = 3;
                        k = 3;
                        ans[o][0] = a;
                        ans[o][1] = b;
                        ans[o][2] = c;
                    }
                }
            }
        }
    }
    for(int i=0;i<t;i++)
    {
        if(ans[i][0] + ans[i][1] + ans[i][2] > -3)
        {
            cout << "YES" << endl;
            cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
