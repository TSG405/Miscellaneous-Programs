// Using a constructor and destructor
#include <iostream>
#include <map>
#include <new>
#include <cstdlib>
using namespace std;

const int SIZE=100;
// This creates the class stack.
class stack
{
    int stck[SIZE];
    int tos;
    public:
        stack(); // constructor
        ~stack(); // destructor
        void push(int i);
        int pop();
        stack(const stack &a);// copy constructor
};
// stack's constructor
stack::stack()
{
    try
    {
        stck = new int[100];
    }
    catch(bad_alloc xa)
    {
        cout << "Allocation Failure" << endl;
        exit(EXIT_FAILURE);
    }
    tos = 0;
    cout << "Stack Initialized\n";
}
// stack's destructor
stack::~stack()
{
    cout << "Stack Destroyed\n";
}
stack::stack(const stack &a)
{
    // constructor to copy the elements of the data of object a to the new object
    try
    {
        stck = new int[SIZE];
    }
    catch(bad_alloc xa)
    {
        cout << "Allocation Failure" << endl;
        exit(EXIT_FAILURE);
    }
    for(int i=0;i<SIZE;i++)
        stck[i] = a.stck[i];
}
void stack::push(int i)
{
    if(tos==SIZE)
    {
        cout << "Stack is full.\n";
    return;
    }
    stck[tos] = i;
    tos++;
}
int stack::pop()
{
    if(tos==0)
    {
        cout << "Stack underflow.\n";
        return 0;
    }
    tos--;
    return stck[tos];
}
int main()
{
    stack a, b;
    // create two stack objects
    //
    //
    a.push(1);
    b.push(2);
    a.push(3);
    b.push(4);
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    cout << b.pop() << endl;
    cout << b.pop() << endl;
    cout << "Reached end of file";
    
    return 0;
};
