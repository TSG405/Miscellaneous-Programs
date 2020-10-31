#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of elements to be added: " ;
    cin >> num;
    int max = 0;
    for(int i=0;i<num;i++)
    {
        int entry;
        cin >> entry;
        if((i == 0)||(max < entry))
            max = entry;
    }
    cout << max;
    return 0;
}
