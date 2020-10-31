#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
//method 1: pass the pointer as argument to the function
void neg(int *i)
{
    *i = -*i;
}

//method 2: read the passed parameter as a reference, i.e., use a reference parameter

void neg(int i)
{
    i = -i;
}

int main()
{
    int i = 1;
    cout << "Current value of i = " << i << endl;
    neg(&i);
    cout << "Negated value of i = " << i << endl;
    neg(i);
    cout << "Negating again using reference parameter, we have" << i << endl;

    return 0;
}
