#include <iostream>
#include <cstdlib>
#define DEBUG
using namespace std;
int main(int argc, char* argv[])
{
    cout << "argc = " << argc << endl;
#ifdef DEBUG
    cout << "the code is wrong" << endl;
#endif
    for(int i = 0; i < argc; i++)
        cout << "argv[" << i << "] = "<< argv[i] << endl;
    for(int i=0;i<argc;i++)
        cout << atoi(argv[i]) << endl;
}
