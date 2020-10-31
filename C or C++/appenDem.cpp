#include<iostream>  
using namespace std;  
int main()  
{  
    string str1="Welcome to C++ programming";  
    string str2="language";  
    cout<<"Before appending,string value is"<<str1<<endl;
    str1.append(str2); 
    str1 = str1 + " " + str2;
    cout<<"After appending, string value is"<<str1<<'\n'; 
    return 0;  
}   
