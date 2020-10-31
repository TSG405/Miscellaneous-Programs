#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    int sum_out = 163;
    int sum_in = 88;
    cout << "outgoing = " << sum_out << endl;
    cout << "incoming = " << sum_in << endl;
    float sumI = float((sum_out / (sum_out + sum_in)) * 100);
    float sumY = float((sum_in / (sum_out + sum_in)) * 100);
    cout << "percentage of outgoing calls = " << sumI << endl;
    cout << "percentage of incoming calls = " << sumY << endl;
    return 0;
}
