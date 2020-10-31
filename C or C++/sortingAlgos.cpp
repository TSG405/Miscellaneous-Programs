#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int* insertionSort(int* a)
{
    for(int j=2;j<sizeof(a);j++)
    {
        int key = a[j];
        int i = j-1;
        while(i > 0 && a[i] > key)
        {
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1] = key;
    }
    return a;
}

int main()
{
    cout << "Algoithms to sort integer arrays\nEnter the lenght of the array: ";
    int len;
    cin >> len;
    int a[len];
    //int* sorted;
    cout << "Enter the elements of the array: ";
    for(int i=0;i<len;i++)
        cin >> a[i];
    cout << "Choose Algorithm: \n1- Insertion Sort\n";
    int choice;
    cin >> choice;
    /*switch(choice)
    {
        case 1:
            sorted = insertionSort(a);
            for(int i=0;i<len;i++)
                cout << sorted[i];
        break;
        default:
            cout << "Wrong Choice" << endl;
        break;
    }*/
    int* sorted = insertionSort(a);
    for(int i=0;i<len;i++)
        cout << sorted[i] << " ";
    return 0;
}
