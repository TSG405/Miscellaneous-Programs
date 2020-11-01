#include <iostream>
using namespace std;

int main() {
    int space;
    int star;
    for (int i=0;i<12;i++)
    {
        if (i<5)
        {
            space=i+4;
            star=i+1;
        }
        else if (i==5||i==6)
        {
            space=i-4;
            star=14;
        }
        else
        {
            space=2*i-10;
            star=12-i;
        }
        cout<<string(space,' ');
        cout<<string(star,'*')<<endl;
    }
    return 0;
}
