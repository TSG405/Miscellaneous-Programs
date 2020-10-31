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
    int n;
    cin >> n;
    string answers[n];
    for(int i=0;i<n;i++)
    {
        string s;
        string t;
        cin >> s >> t;
        int lenS = s.length();
        auto iS = s.begin();
        auto iT = t.begin();
        string verdict = "YES";
        if(s.length() > t.length())
            verdict = "NO";
        while((verdict == "YES")&&(iS < s.end())&&(iT < t.end()))
        {
            if(*iS != *iT)
                verdict = "NO";
            else
            {
                //pop elements in t till *iS != *iT
                bool popOnce = false;
                while((popOnce == false)&&(*iS == *iT))
                {
                    iT++;
                    if((iS+1) < s.end())
                    {
                        if(*(iS + 1) == *iS)
                            popOnce = true;
                    }
                }
                //move the index pointer to the next character;
                iS++;
            }
        }
        answers[i] = verdict;
    }
    for(int i=0;i<n;i++)
        cout << answers[i] << " ";
    return 0;
}
