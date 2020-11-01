#include<iostream>
using namespace std;

void binary(int num)
{
    int r;
    if (num <= 1)
    {
        cout << num;
        return;
    }
    r = num % 2;
    binary(num / 2);
    cout << r;
}
int main()
{
    int dec;
    cout << "Enter a Number : ";
    cin >> dec;
    if (dec < 0)
        cout << dec << " is NOT a positive integer." << endl;
    else
    {
        cout << "The binary form of " << dec << " is ";
        binary(dec);
        cout << endl;
    }
    return 0;
}
