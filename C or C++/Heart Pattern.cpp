#include <iostream>
using namespace std;

int main() 
{
int i,j;
for(i=0;i<=5;i++)
{
    for(j=0;j<=6;j++)
    {
        if(((i==0)&&(j%3!=0))||((i==1)&&(j%3==0))||(i+j==8)||(i-j==2))
        cout<<"T ";
        else
        cout<<"  ";
    }
    cout<<endl;
}
cout<<endl;
    return 0;
}

// Coded by TSG, 2020
