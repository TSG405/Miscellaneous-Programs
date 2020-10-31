//algo correct: works in python
//ceil function seems to work the same way as the floor function
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, m, a ;
    cin >> n >> m >> a;
    double s1 = n/a;
    double s2 = m/a;
    int side1 = floor(s1)+1;
    int side2 = floor(s2)+1;
    cout << side1*side2 << endl;
}
