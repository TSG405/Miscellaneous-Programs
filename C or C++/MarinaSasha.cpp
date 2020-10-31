#include <iostream>

using namespace std;
//https://codeforces.com/contest/59/problem/B
int main()
{
    int n;
    cin >> n;
    int a[n];
    int even=0,odd=0,totalsum=0,od_mn=0;
    for(int i=0;i<n;i++)
    {
        //count the number of even and the number of odd values
        cin >> a[i];
        totalsum+=a[i];
        if(i == 0)
            od_mn=a[i];
        if(i > 0)
        {
            if(a[i]%2 != 0)
            {
                odd+=a[i];
                if(od_mn > a[i])
                    od_mn = a[i];

            }
            else
                even += a[i];
            
        }
    }
    if(totalsum%2 == 0)
        totalsum -= od_mn;
    if((even >= 0)&&(odd == 0))
        totalsum = 0;
    cout << totalsum;
    return 0;
}
