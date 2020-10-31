#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b,mon;
    cin >> n >> m >> a >> b;
    mon = b*(n/m) + (n%m)*a;
    cout << mon;
    return 0;
}
