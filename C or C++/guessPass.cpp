#include <iostream>
#include <bits/c++io.h>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string decryptPassword(string s)
{
    string fin="";
    for(auto i=s.begin();i!=s.end();i++)
    {
        int k = (int)*i;
        if(i+1 != s.end())
        {
            int l = (int)*(i+1);
            if((l >= 65)&&(l <= 90)&&(k >= 97)&&(k <= 122))
            {
                fin += *(i+1) + *i + '*';
                i++;
            }
        }
        if((k >= 48)&&(k <= 57))
        {
            fin = *i + fin + "0";
        }
    }
    return fin;
}
int main()
{
    string s;
    cin >> s;
    cout << decryptPassword(s) << endl;
    return 0;
}
