#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


bool checkCons(char a)
{
    bool b = true;
    if((a == 'A')||(a == 'a')||(a == 'e')||(a == 'E')||(a == 'i')||(a == 'I')||(a == 'o')||(a == 'O')||(a == 'u')||(a == 'U'))
        b = false;
    return b;
}

int main()
{
    string str,s=".";
    cin >>  str;
    for(int i=0;i<str.length();i++)
    {
        char c = str[i];
        bool b = checkCons(c);
        if(!b)
            str.replace(i--,1,"");
        else
        {
            c = tolower(c);
            s = s + c;
            str.replace(i,1,s);
            s = ".";
            i++;
        }
    }
    cout << endl;
    cout << "Final string: " << str << endl;
}
