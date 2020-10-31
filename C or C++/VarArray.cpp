#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    int arr[n][300000];
    int k[n];
    for(int i=0;i<n;i++)
    {
        cin >> k[i];
        for(int j=0;j<k[i];j++)
            cin >> arr[i][j];
    }
    vector queries[q];
    for(int i=0;i<q;i++)
    {
        int d[2];
        cin >> d[0] >> d[1];
        queries[i] = d;
    }
    cout << 
    cout << "Accepted the elements" << endl;
    for(int i=0;i<q;i++)
    {
        int *k = queries[i];
        int *j = vct[*k];
        cout << *(j+*k) << endl;
        //cout << vct[*k][*(k+1)] << endl;
    }
    return 0;
}
