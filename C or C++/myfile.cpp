#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Link
{
    public:
    Link(int a,string b, double c, long d);
    int ID;
    string name;
    double salary;
    long aadharNo;
};
Link::Link(int a,string b, double c, long d)
{
    ID = a;
    name = b;
    salary = c;
    aadharNo = d;
}

int main()
{
    //for(int i=0;i<1;i++)
    //{
        int a;
        string b;
        double c;
        long d;
        cout << "Enter the ID of the employee: ";
        cin >> a;
        cout << "Enter the name of the " << "th person : ";
        cin >> b;
        cout << "Enter the salary of the individual: ";
        cin >> c;
        cout << "Enter the aadhar number: ";
        cin >> d;
        Link ob(a,b,c,d);
        cout << "\n\nNow is the time to display the data recorded: \n";
        cout << "Name = " << ob.name << endl;
        cout << "Salary = " << ob.salary << endl;
        cout << "Aadhar Number = " << ob.aadharNo << endl;
        cout << "ID = " << ob.ID;
    //}
    return 0;
}
