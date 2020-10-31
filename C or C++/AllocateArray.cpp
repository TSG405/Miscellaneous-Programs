#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int *p, i;
    int h = 6;
    cout << "Enter an integer: " << "\n";
    cin >> h;
        p = new int [10]; // allocate 10 integer array
    for(i=0;i<10;i++)
        p[i] = h;
    for(i=0; i<10; i++)
        cout << p[i] << " ";
    delete [] p; // release the array
    return 0;
}
