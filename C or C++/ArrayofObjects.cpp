#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class cl
{
    public:
    int i;
    
    void set_i(int j)
    {
        i = j;
    }
    cl(int k)
    {
        i = k;
    }
    int get_i()
    {
        return i;
    }
    ~cl()
    {
        i = 0;
    }
};

void PointertoArr()
{
    /*cl ob(88), *p;//declare pointer in the same line as variable
    p = &ob;
    cout << "Value of the element " << p->get_i()<<endl;
    */
    cl ob(1);
    int *p;
    p = &ob.i; // get address of ob.i
    cout << *p; // access ob.i via p
}


int main()
{
    /*cl ob[3];
    for(int i=0;i<3;i++)
    {
        ob[i].set_i(i+1);
    }*/
    //there is an alternate way of doing just what the above code did - initializing the variable i in the class, provided that the numbers to be initialised with are known:
    cl ob[3] = {1, 2, 3}; // initializers


    cout << "Initialised the arrays " << endl;
    cout << "Now printing the values stored in the objects" << endl;
    for(int i=0;i<3;i++)
        cout << ob[i].get_i() << " ";
    cout << "Now using pointers" << endl;
    PointertoArr();
    return 0;
}
