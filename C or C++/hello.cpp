#include <iostream>
//include the math header file to access functions like sin cos, etc.

#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
const int MAX = 3;
static int count = 10;
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
union Package
{
    int i;
    double d;
    long l;
    char c;
    short s;
};
void unionTest()
{
    cout << "sizeof(Package) = " << sizeof(Package) << endl;
    Package x;
    x.c = 'c';
    cout << "char = " << x.i << endl;
    x.d = 3.14159265;
    cout << "double = " << x.d << endl;
}
void instantTest()
{
    cout << "\n\nInstant test of code: \n\n\n";
    int a[10];
    cout << "sizeof(int) = "<< sizeof(int) << endl;
    for(int i = 0; i < 10; i++)
    cout << "&a[" << i << "] = " << (long)&a[i] << endl; 
}


bool conditional_statement(string s)
{
    bool k = (s == "hello")? true:false;
    return k;
}

void printBinary(const char val)
{
    for(int i=7;i>=0;i--)
    {
        if(val & (1 << i))
            std::cout << "1 ";
        else
            std::cout << "0 ";
    }
}

struct Books 
{
    char  title[5];
    char  author[50];
    char  subject[100];
    int   book_id;
};// always need a semicolon on defining a struct... not a method
void printBook( struct Books book )
{
    cout << "Book title : " << book.title <<endl;
    cout << "Book author : " << book.author <<endl;
    cout << "Book subject : " << book.subject <<endl;
    cout << "Book id : " << book.book_id <<endl;
} 
void structImplement() 
{
    struct Books Book1;        // Declare Book1 of type Book
    struct Books Book2;        // Declare Book2 of type Book
 
    // book 1 specification
    strcpy( Book1.title, "Learn C++ Programming");
    strcpy( Book1.author, "Chand Miyan"); 
    strcpy( Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;
    
    // book 2 specification
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Yakit Singha");
    strcpy( Book2.subject, "Telecom");
    Book2.book_id = 6495700;
     
    // Print Book1 info
    printBook(Book1) ;
    // Print Book2 info
    printBook(Book2);
}

void reference_swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}
void print_random_numbers()
{
    srand((unsigned)time(NULL)); // planting the seed for the random number generation as the time of the system in seconds
    for(int i=0;i<10;i++)
    {
        int j = rand();
        cout << "Random number = " << j << endl;
    }
}
int checkError()
{
    unsigned int k;
    cin >> k;
    return k;
}
int maximum(int a, int b)
{
    return (a > b)? a:b;
}
void static_var_demonstrate()
{
    static int i = 5; // local static variable
    i++;
    std::cout << "i is " << i ;
    std::cout << " and count is " << count << std::endl;
}

int pointerfunc()
{
    int  var[MAX] = {10, 100, 200};
 
    for (int i = 0; i < MAX; i++)
    {
        *var = i;    // This is a correct syntax
//        var++;       // This is incorrect.
    }
    return 0;
}
int* bubble_sort(int* arr)
{
    for(int i=0;i<sizeof(arr);i++)
    {
        for(int j=0;j<sizeof(arr)-i+1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                //condition to sort the elements of the array
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    return arr;
}
void date_and_time()
{
    //#include  <ctime> at the top of the file
    //includes the ctime header file used to access system time
    time_t nw = time(0);
    cout << "time_t value: " << nw << endl;
    char* dt = ctime(&nw);
    cout << "Local date and time is: " << dt << endl;
    tm *ltm = localtime(&nw);



}


void diff_modifiers()
{
    short int i;           // a signed short integer
    short unsigned int j;  // an unsigned short integer
    
    j = 50000;
    
    i = j;
    cout << i << " " << j;
}

void String_Handling()
{
    cout << "C-style character string" << endl;
    string s = "Hello";
    string s2 = "World";
}
void side()
{
    typedef int length;
    length h = 90;
    cout << "Length = " << h << endl;
}
void displayAddress()
{
    int rt = 0;
    int *ptr = &rt;
    cout << "Address of the number: "<<&rt << endl;
    cout << "Address of ptr = " << ptr << endl;
    cout << "Value of ptr = " << *ptr << endl;
    ptr++;
    cout << "Value of ptr after increment " << *ptr << endl;
}

/*
void changeValues() 
{ 
    cout << "Value before change" << endl;
    for ( int i = 0; i < 5; i++ )
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    setValues(1) = 20.23; // change 2nd element
    setValues(3) = 70.8;  // change 4th element 
    cout << "Value after change" << endl;
    for ( int i = 0; i < 5; i++ )
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
}
*/
double& setValues( int i ) 
{
   return vals[i];   // return a reference to the ith element
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    //hello ob = new hello();
    /*cout << "Hello World" << "\n";
    cout << "Size of char" << sizeof(char) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of: " << sizeof(long) << endl;
    int f = 9;
    int k = ++f;
    cout << "The values are: " << f << " " << "The second set: " << ++k + f++ << endl;
    side();
    cout << "Displaying the address of the variable: " << endl;
    displayAddress();
    cout << "Demonstration of the static variables: " << endl;
    while(count--)
        static_var_demonstrate();
    cout << "Conditional statements testing: " << endl;
    //cin << "Enter the number of elements: " << k << endl;
    cout << conditional_statement("hello") << endl;
    cout << "Return max or min" << endl;
    cout << maximum(23,25);
    cout << "Random number printing: " << endl;
    print_random_numbers();*/
    cout << "Bubble Sort";
    int len = 10;
    int arr[] = {34,53,23,45,32,6,35,980,34,67,54,24};
    //for(int i=0;i<10;i++)
    //    arr[i] = 10-i;
    int* sorted = bubble_sort(arr);
    for(int i=0;i<10;i++)
        cout << sorted[i] << " ";
    std::cout << " Bitwise printing " << endl;
    printBinary(12);


    cout << "Union in cpp :" << endl;
    unionTest();
    /*cout << "Checking for an expected error: ";
    unsigned int num = checkError();
    cout << "Finally recorded number = " << num << endl;
    cout << "Swapping 2 integers using pointers:" << endl;
    cout << "Enter the 2 numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    //cout << "Enter the second number: " ;
    //cin >> num2;
    swap(&num1,&num2);
    cout << "First number = " << num1 << " Second number = " << num2 << endl;
    cout << "Taking inputs: " << endl;
    cout << "Swap by using references: " << endl;
    cout << "Swapping again: ";
    reference_swap(num1,num2);
    cout << "First number = " << num1 << " Second number = " << num2 << endl;
    date_and_time();
    structImplement();*/
    instantTest();
    return 0;
}

