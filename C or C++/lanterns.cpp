#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin >> n >> l;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int num = sizeof(a)/sizeof(a[0]);
    sort(a,a+num);
    int maxdiff = a[1]-a[0];
    for(int i=2;i<n;i++)
    {
        int diff = a[i] - a[i-1];
        if(diff > maxdiff)
            maxdiff = diff;

    }
    cout << "Valus of the radius = ";
    double rad = double(maxdiff)/2;
    cout << "1.9%f" << rad << endl;
    cout << "Maximum difference between 2 posts = " << maxdiff << endl;
    return 0;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";

}
