#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <list>
#include <time.h>
#include <algorithm>
#define two_space(a,b), cout << a << " " << b << endl;
#define one_line(k), cout << k << endl;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int p;
    cin >> p;
    bool t[p];
    for(int j=0;j<p;j++)
    {
        string a,b;
        cin >> a >> b;
        unordered_map<char, int> sa;
        unordered_map<char,int> sb;
        for(auto i = a.begin();i != a.end();i++)
            sa[(char)*i]++;
        for(auto i = b.begin();i != b.end();i++)
            sb[(char)*i]++;
        t[j] = false;
        for(auto i=sa.begin();!t[j] && i!=sa.end();i++)
        {
            if(sb.find(i->first) != sb.end())
                t[j] = true;
        }
    }
    for(int j=0;j<p;j++)
        cout << ((t[j] == true)? "YES":"NO") << endl;
    return 0;
}
