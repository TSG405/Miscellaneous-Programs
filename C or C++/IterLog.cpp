#include <iostream>
#include <bits/c++io.h>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <list>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int returnIterLog(long long int n)
{
    if(n == 2)
        return 1;
    if(n == 3 || n == 4)
        return 2;
    if(n >= 5 && n <= 16)
        return 3;
    if(n >= 17 && n <= 65536)
        return 4;
    if(n > 65536 && n <= pow(2,65536))
        return 5;
    return 0;
}

int main()
{
    long long int n;
    cin >> n;
    cout << returnIterLog(n) << endl;
    return 0;
}


