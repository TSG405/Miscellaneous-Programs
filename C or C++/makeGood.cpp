#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int as[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int a[n],b[n],ca[n],cb[n];
        for(int j=0;j<n;j++)
        {
            ca[j] = 0;
            cb[j] = 0;
        }
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
            cin >> b[j];
            ca[a[j]]++;
            cb[b[j]]++;
        }
        for(int j=0;j<n;j++)
        {
            if((a[i] != b[i])&&((ca[a[j]] > 1)||(cb[b[j]] > 1)))
            {
                int t = a[j];
                a[j] = b[j];
                b[j] = t;
            }
        }
        as[i]++;
    }
    for(int i=0;i<t;i++)
        cout << as[i];
    return 0;
}
