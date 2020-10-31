#include <iostream>
#include <string>
using namespace std;
void func1(int a[], int size) {
 for(int i = 0; i < size; i++)
 a[i] = i * i - i;
}
void func2(int* a, int size) {
 for(int i = 0; i < size; i++)
 a[i] = i * i + i;
 }
void print(int a[], string name, int size) {
 for(int i = 0; i < size; i++)
 cout << name << "[" << i << "] = "
 << a[i] << endl;
}
int main()
{
 int a[5], b[5];
 cout << "Probably garbage values" << endl;
 print(a, "a", 5);
 print(b, "b", 5);
 cout << "Initialize the arrays:" << endl;
 func1(a, 5);
 func1(b, 5);
 print(a, "a", 5);
 print(b, "b", 5);
cout << "Notice the arrays are always modified:" << endl;
 func2(a, 5);
 func2(b, 5);
 print(a, "a", 5);
 print(b, "b", 5);
}
