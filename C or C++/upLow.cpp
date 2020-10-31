#include <iostream>
#include <string>
using namespace std;
int main()
{
    char data[100];
    cin >> data;
    int C_UP=0,C_DN=0;
    char *c = data;
    int lent=0;
    //counting the number of capital and small letters in the string
    while(*c != '\0')
    {
        int k = (int)(*c);
        if((k >= 97)&&(k <= 122))
            C_DN++;
        if((k >= 65)&&(k <= 90))
            C_UP++;
        c++;
        lent++;
    }
    char res[lent];
    bool v = (C_DN >= C_UP)? true:false;// if the number of small letters is larger or the number of capital letters is larger 
    if(v)
    {
        for(int i=0;i<lent;i++)
        {
            int k = (int)data[i];
            if((k >= 65)&&(k <= 90))
                k = (k+32);
            res[i] = (char)k;
        }
    }
    else
    {
        for(int i=0;i<lent;i++)
        {
            int k = (int)data[i];
            if((k >= 97)&&(k <= 122))
                k = (k-32);
            res[i] = (char)k;
        }
    }
    for(int i=0;i<lent;i++)
        cout << res[i] << "";
    //cout << res << endl;
    return 0;
}
