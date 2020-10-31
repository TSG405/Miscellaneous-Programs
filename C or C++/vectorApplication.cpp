#include <iostream>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

// create a separate function for the task to be performed and call named function from the main function

void displayType()
{
    int x = 1;
    string my_type = typeid(x).name();
    system(("echo " + my_type + " | c++filt -t").c_str());
}
void vecArr()
{
    int n[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
            n[i][j] = i+j;
    }
    cout << "Displaying the elements in the array : \n";
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
            cout << (long)&n[i][j] << " ";
        cout << " \n";
    }

}
void vecDo()
{
    vector<char> v(10);
    vector<char> v2;
    char str[] = "<vector>";
    unsigned int i;
    //step to initialise v;
    for(i=0;i<10;i++)
    {
        v[i] = i + 'a';

    }
    for(i=0;i<10;i++)
    {
        v2.push_back(str[i]);
    }
    cout << "The original contents of the array are as follows: ";
    for(i=0;i<10;i++)
        cout << v[i] << " ";
    cout << "\n\n" << endl;
    vector<char>::iterator p = v.begin();
    p+= 2;
    v.insert(p,10,'X');
    for(i=0;i<15;i++)
        cout << v[i] << " ";
    cout << "\nElements in the vector v: " << endl;
    for(auto i = v.begin();i<v.end();i++)
        cout << *i << " ";

}
int main()
{
    
    vector<int> kh;
    for(int i=0;i<10;i++)
        kh.push_back(i+1);
    for(auto i=kh.begin();i<kh.end();i++)
        cout << *i  << endl;
    cout << "Checking the iterator" << endl;
    auto i = kh.begin();
    cout << *i << endl;
    cout << " Calling the function vecDo()\n\n" << endl;
    vecArr();
    //vecDo();
    /*
    //displayType(i);
    cout << "entering copied code" << endl;
    string my_type = typeid(i).name();
    system(("echo " + my_type + " | c++filt -t").c_str());
    //cout << typeid(i).name().c_str() << endl;// how to get the id of the type along eith the name -> typeid(<var>).name()*/
    return 0;
}
