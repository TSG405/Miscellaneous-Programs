#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float min=0.0;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        float dist = sqrt(x*x + y*y + z*z);
        if(i == 0)
            min = dist;
        else
        {
            if(min > dist)
                min = dist;
        }
    }
    printf("%0.3f",min);
}
