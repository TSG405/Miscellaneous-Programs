#include <iostream>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int a_apple = s-a;
    int b_orange = t-b;
    int app_count = 0;
    int org_count = 0;
    for(auto i = oranges.begin();i < oranges.end();i++)
    {
        *i = *i + b;
        if((*i >= s)&&(*i <= t))
            org_count++;

    }
    for(auto j = apples.begin();j < apples.end();j++)
    {
        *j = *j + a;
        if((*j >= s)&&(*j <= t))
            app_count++;
    }
    cout << "Output value: \n";
    cout << app_count << "\n" << org_count << endl;
    /*
    2 3
    1 5
    1 1
    2
    -2
    */

}

int main()
{
    int a,b,s,t,m,n;
    cin >> s >> t >> a >> b >> m >> n;
    vector<int> apple(m);
    vector<int> orange(n);
    for(int i=0;i<m;i++)
        cin >> apple[i];
    for(int i=0;i<n;i++)
        cin >> orange[i];
    countApplesAndOranges(s,t,a,b,apple,orange);
    return 0;
}
