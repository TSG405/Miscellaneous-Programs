#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <list>
#include <time.h>
#include <algorithm>
#include <cmath>
#define two_space(a,b), cout << a << " " << b << endl;
#define one_line(k), cout << k << endl;
using namespace std;

unordered_map<long long int, int> mp;
void counter(long long int n)
{
    long long int p=n,mn=n;
    int c=0;
    while(p > 0)
    {
        c = p%10;
        if(mp.find(n-c) != mp.end())
        {
            if(mp[n-c] < mn)
                mn = mp[n-c];
            p /= 10;
        }
        else
            counter(n-c);
    }
    cout << "mn = " << mn << " c = " << c << endl;
    mp[n] = mn;
    if(n > 0)
        mp[n]++;
    cout << "mp[" << n << "] = " << mp[n] << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    long long int n;
    cin >> n;
    counter(n);
    cout << mp[n] << endl;
    return 0;
}
