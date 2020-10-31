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
    int t;
    cin >> t;
    int res[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        char c[n];
        cin >> c;
        char stack[n];
        int top = -1;
        int size = 0;
        for(int i=0;i<n;i++)
        {
            if(c[i] == '(')
            {
                ++top;
                stack[top] = c[i];
            }
            if(c[i] == ')')
            {
                if(top > -1)
                {
                    if(stack[top] == '(')
                        top--;
                    else
                    {
                        ++top;
                        stack[top] = c[i];
                    }
                }
                if(top == -1)
                {
                    ++top;
                    stack[top] = c[i];
                }
            }
        }
        res[i] = (top+1)/2;
    }
    for(int i=0;i<t;i++)
        cout << res[i] << " ";
    return 0;
}
