#include <iostream>
#include <string>

using namespace std;
typedef long long ll;

int main() {
    string S; cin >> S;
    ll a = 0, b = 0, c = 0;    
    for (int i = 0; i < (int)S.size(); ++i)
    {
        if (S[i] == 'o')
        {
            b += a;
        }
        else if (i > 0 && S[i-1] == 'v')
        {
            a++;
            c += b;
        }
    }
    cout << c << endl;
}
