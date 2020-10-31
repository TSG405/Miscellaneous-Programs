#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long
#define MX 100000

using std::cin;
using std::cout;
using std::cerr;
using std::floor;
using std::ceil;
using std::vector;
using std::unordered_map;
using std::map;
using std::endl;
using std::stack;
using std::queue;
using std::max;
using std::min;
using std::deque;
using std::priority_queue;
using std::bitset;
using std::set;
using std::sort;
using std::hash;
using std::pair;
using std::make_pair;
using std::string;
using std::swap;
using std::hash;

string isValid(string s)
{
    unordered_map<char,int> a;
    for(int i=0;i<(int)s.size();i++)
    {
        a[s[i]]++;
    }
    int mx = 0,mn = MX;
    for(unordered_map<char,int>::iterator it = a.begin();it != a.end();it++)
    {
        if(it->second < mn)
            mn = it->second;
    }
    for(unordered_map<char,int>::iterator it = a.begin();it != a.end();it++)
    {
        if(it->second > mn)
            mx++;
    }
    if(mx > 1)
        return "NO";
    return "YES";
}


int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    cout << isValid(s) << endl;
    return 0;
}
