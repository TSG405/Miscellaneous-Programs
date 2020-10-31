#include <iostream>
#include <bits/c++io.h>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    char c[100];
    string s;
    cin >> c;
    int count=0;
    char *ch = c;
    while(*ch !='\0')
    {
        cout << (int)*ch << " ";
        ch++;
        count++;
    }
    cout << "Using array indexes: " << endl;
    for(int i=0;i<count;i++)
    {
        cout << (int)c[i] << " ";
    }
    cout << "\n";
    cout << sizeof(c) << endl;
    return 0;
}
