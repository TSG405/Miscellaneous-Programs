#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
    bool debug = false;
    for(int i = 0; i < argc; i++)
        if(string(argv[i]) == "--debug=on")
            debug = true;
    bool go = true;
    while(go)
    {
        if(debug)
        {
        // Debugging code here
            cout << "Debugger is now on!" << endl;
        }
        else
        {
            cout << "Debugger is now off." << endl;
        }
        cout << "Turn debugger [on/off/quit]: ";
        string reply;
        cin >> reply;
        if(reply == "on")
            debug = true; // Turn it on
        if(reply == "off")
            debug = false; // Off
        if(reply == "quit")
            break; // Out of 'while' 
    }
}
