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
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout << "* ";
        cout << "\n";
    }
    return 0;
}
