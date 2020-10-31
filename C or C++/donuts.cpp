#include <iostream>
#include <bits/c++io.h>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <stdexcept>
using namespace std;

// THIS PROGRAM FAILS ON TEST 10

bool checkRange(double a,double b,double c)
{
    return ((a >= 1)&&(a <= pow(10,9))&&(b >= 2)&&(b <= pow(10,9))&&(c >= 1)&&(c <= pow(10,9)))? true:false;
}
bool checkRange(int n)
{
    return ((n > 0)&&(n <= pow(10,9)))? true:false;
}

int main()
{
    int t;
    cin >> t;
    int r[t][2];
    for(int i=0;i<t;i++)
    {
        double a,b,c;
        int ans1 = -1, ans2 = -1;
        // ans1 = first < second
        // ans2 = first > second
        cin >> a >> b >> c;
        //checking for slope of first less than slope of down of second
        if(checkRange(a,b,c))
        {
            try
            {
                if(a < (c/b))
                {
                    if(a < c)
                        ans1 = 1;
                    ans2 = -1;
                }
                if(a > (c/b))
                {
                    if(a < c)
                        ans1 = 1;
                    double D = a-(c/b);
                    if(D != 0)
                    {
                        ans2 = ceil(c/D);
                        if(ans2 <= 0)
                            ans2 = -1;
                    }
                }
                if(a == (c/b))
                {
                    ans1 = 1;
                    ans2 = -1;
                }
            }
            catch(runtime_error &e)
            {
                cout << "Runtime Error!!" << e.what();
            }
            catch(io_errc &k)
            {
                cout << "I/O Error: Please check the program";
            }
            if(checkRange(ans1))
            {
                //r[i][0] = (int)min(pow(10,9),(double)ans1);
                r[i][0] = ans1;
            }
            else
            {
                r[i][0] = -1;
            }
            if(checkRange(ans2))
            {
                //r[i][1] =  (int)min(pow(10,9),(double)ans2);
                r[i][1] = ans2;
            }
            else
            {
                r[i][1] = -1;
            }
        }
    }
    for(int i=0;i<t;i++)
        cout << r[i][0] << " " << r[i][1] << endl;
    return 0;
}
