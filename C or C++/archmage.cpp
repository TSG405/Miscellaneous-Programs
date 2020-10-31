#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int t;
    cin >> t;
    int ans[t];
    for(int i=0;i<t;i++)
    {
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        /*if(n/x < m)
        {
            m = m-n/x;
            n = n%x;
            
        }
        if(m > 0)
        {

        }*/
        int delta = (-1)*(x-y);
        if(delta >= 0)
            ans[i] = m;
        else
        {
            ans[i] = n-(m+y)%x;//ceil((double)((n-x)/(x-y)));
        }  
    }
    for(int i=0;i<t;i++)
        cout << ans[i] << endl;
    return 0;
}
