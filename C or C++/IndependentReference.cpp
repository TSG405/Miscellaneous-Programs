#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a;
    int& ref = a;
    cout << "a = " << a << " ref = " << ref << endl;
    ref = 100;
     cout << "a = " << a << " ref = " << ref << endl;

    int b = 19;

    ref = b;
    cout << "a = " << a << " ref = " << ref << endl;
    a = 45;
     cout << "a = " << a << " ref = " << ref << endl;

    return 0;
}
