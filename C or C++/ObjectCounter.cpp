#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Counter
{
    public:
        static int count;
        Counter()
        {
            count++;
        }
        ~Counter()
        {
            count--;
        }
};
int Counter::count;
void f()
{
    Counter temp;
    cout << "Objects in existence = " << Counter::count << endl;
    //temp destroyed when the function f() returns;
}
int main()
{
    Counter ob1;
    cout << "Objects in existence = " << Counter::count << endl;
    Counter ob2;
    cout << "Objects in existence = " << Counter::count << endl;
    f();
     cout << "Objects in existence = " << Counter::count << endl;
    

    return 0;
}









