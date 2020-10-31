#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n > 0)
    {
        int k = n;
        // find the positions of the maximum and the minimum digits in the number
        int maxD=0,minD=9,iMax=0,iMin=0;
        while(k > 0)
        {
            int d = k%10;
            if(maxD < d)
                maxD = d;
            if(minD > d)
                minD = d;
        }
        // find the index of the max and min digit
        // eg: 97246
        // max = 9 at index 5 and min = 2 at index 3;
        // then first sequence =  * 9 + 
        // 50102

    }
}
