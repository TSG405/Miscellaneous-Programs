#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int fin[t][50];
    int ind[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int a[2*n];
        int digits_check[n];
        for(int j=0;j<n;j++)
        {
            digits_check[j] = 0;
            fin[i][j] = 0;
        }
        int k = 0;
        for(int j=0;j<2*n;j++)
        {
            cin >> a[j];
            if(digits_check[a[j]-1] == 0)
            {
                fin[i][k] = a[j];
                k++;
                digits_check[a[j]-1]++;
            }
        }
        ind[i] = k;
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<ind[i];j++)
            cout << fin[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
