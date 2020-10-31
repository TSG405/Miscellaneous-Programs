#include <iostream>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    int D0 = v1 - v2;
    string d = "NO";
    if(D0 != 0)
    {
        double xc1 = (x2*v1-x1*v2)/D0;
        double n1 = (xc1-x1)/v1;
        double n2 = (xc1-x2)/v2;
        double k1 = floor(xc1),k2 = floor(n1),k3 = floor(n2);
        if((xc1 > x1)&&(xc1 > x2)&&(n1 == n2)&&(k1-xc1 == 0)&&(k2-n1 == 0)&&(k3-n2 == 0))
            d = "YES";
    }
    // 21 6 47 3
    return d;
}

int main()
{
    int x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1,v1,x2,v2);
    return 0;
}
