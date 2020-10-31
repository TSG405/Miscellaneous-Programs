#include <iostream>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a = 90;
    int b = 100;
    cout << "Address = " << (long)&a << " " << (long)&b << endl;
    int *p = &a;
    cout << "p = " << *p << " " << endl;
    p++;
    cout << "p after increment = " << *p << " " << endl;
    return 0;
}
