#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long int solution[t][2];
    for(int i=0;i<t;i++)
    {
        long long int l,r;
        cin >> l >> r;
        if(2*l <= r)
        {
            solution[i][0] = l;
            solution[i][1] = 2*l;
        }
        else
        {
            solution[i][0] = -1;
            solution[i][1] = -1;
        }
    }
    for(int i=0;i<t;i++)
        cout << solution[i][0] << " " << solution[i][1] << endl;
    return 0;
}
