#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements n the array: ";
    cin >> n;
    cout << "Enter the array in space separated form: ";
    int a[n];
    int b[n];
    int k = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i] > k)
            k = a[i];
        b[i] = 0;
    }
    cout << "initialised k" << endl;
    int c[k];
    for(int i=0;i<n;i++)
        c[a[i]] = c[a[i]]+1;
    cout << "initialised array c[]" << endl;
    for(int i=1;i<k;i++)
        c[i] = c[i] + c[i-1];
    cout << "modified array c[]" << endl;
    for(int j=n;j>=0;j--)
    {
        cout << "Iteration: " << j << endl;
        b[c[a[j]]] = a[j];
        c[a[j]] = c[a[j]]-1;
    }
    cout << "COMPLETED!!" << endl;
    cout << "Sorted array: ";
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}
