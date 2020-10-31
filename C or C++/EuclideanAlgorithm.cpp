#include <iostream>
using std::cin;
using std::cout;
using std::endl;

long long int gcd(long long int a, long long int b)
{
    long long int t;
    // gcd(a,b) = gcd(b,a%b)
    while((a != 0)&&(b != 0))
    {
        t = a%b;
        a = b;
        b = t;
    }
    return a+b;

}
int main()
{
    //cout << "Calculation of the GCD of 2 numbers using Eucliden Algorithm" << endl;
    //cout << "Enter the 2 numbers: ";
    long long int a, b;
    cin >> a >> b;
    cout <<  (a*b)/gcd(a,b);
    return 0;
}
