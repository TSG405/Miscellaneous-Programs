#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int locations[n][2];
    float avgX=0.0,avgY=0.0;
    for(int i=0;i<n;i++)
    {
        cin >> locations[i][0] >> locations[i][1];
        avgX += (float)locations[i][0];
        avgY += (float)locations[i][1];
    }
    // accepted the locations of the oil wells
    // method: plot these points on the graph and find the optimal location of the main pipeline so that all the branches are minimum
    //
    // one way: linear regression - find the slope of the line and the y-intercept
    avgX /= n;
    avgY /= n;
    
}
