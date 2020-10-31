#include <bits/stdc++.h>
#include <list>

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
int maximumPower(string s)
{
    int i = 0,j=0,mxj = 0,n=(int)s.size();
    bool isThere=false;
    while(s[i] == '0')
    {
        i++;
        if(s[i] == '1')
            isThere = true;
    }
    int end_point = i;
    int nCount = 0;
    do
    {
        i = (i+1)%n;
        while(s[i] == '0' && nCount < n)
        {
            j++;
            i = (i+1)%n;
            nCount++;
        }
        mxj = max(mxj,j);
        j = 0;
    }while(nCount < n && i != end_point);
    return (isThere)? mxj:-1;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    int result = maximumPower(s);

    cout << result << "\n";

    return 0;
}

