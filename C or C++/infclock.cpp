#include <iostream>
#include <bits/c++io.h>
#include <algorithm>
#include <cstdlib>
#include <unordered_map>
#include <unordered_set>//hash table
#include <map>
#include <queue>
#include <list>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


struct Heap     // 0-indexed heap
{
    vector<int> arr; // holds the elements of the array - change to int if required
    bool heaptype;
    //  NOTE: true  = Min-Heap
    //        false = Max-Heap
    Heap(string s,int k)//  this one is preferrable
    {
        arr.resize(k);
        if(s == "min")
            heaptype = true;
        if(s == "max")
            heaptype = false;
        //cerr << "completed executing: Heap(str,int)" << endl;
    }
    Heap(string s)
    {
        if(s == "min")
            heaptype = true;
        if(s == "max")
            heaptype = false;
        //cerr << "completed executing :Heap(str)" << endl;
    }
    bool compareNums(int a, int b)
    {
        /*
         * in the case of min heap, this function checks if b >= a
         * in case of max heap, this function checks if b < a
         */
        bool decision=false;
        if(a < b)
            decision = true;
        if(heaptype)
            decision = !decision;
        cerr << "executed compareNums(" << a << ", " << b << ") = " << decision << endl;
        return decision;
    }
    int parent(int i)
    {
        //cerr << "parent(" << i << ") = " << floor((i-1)/2) << endl;
        return floor((i-1)/2);
    }
    int left(int i)
    {
        //cerr << "left(" << i << ") = " << floor((i-1)/2) << endl;
        return 2*i+1;
    }
    int right(int i)
    {
        //cerr << "right(" << i << ") = " << floor((i-1)/2) << endl;
        return 2*i+2;
    }
    void editValue(int i,int p) // changes the value at index i with p
    {
        //cerr << "editValue(" << i << ", " << p << ")" << endl;
        int oldp = arr[i];
        arr[i] = p;
        if(compareNums(oldp,p))
            siftUp(i);
        else
            siftDown(i);
    }
    void insert_to_heap(int p)
    {
        //cerr << "executing insert_to_heap(" << p << ")" << endl;
        arr.push_back(p);       // change here if using array instead of vector
        siftUp(arr.size()-1);   // here too
    }
    void removeNode(int i)
    {

        arr[i] = arr[0]+1;
        siftUp(i);
        extractRoot();
        //cerr << "removeNode(" << i << ")" << endl;
    }
    int extractRoot()
    {
        int result = -98765;
        if(arr.empty())
            cerr << "ROOT DOES NOT EXIST\n HEAP IS EMPTY\nCHECK YOUR CODE" << endl;
        else
        {
            result = arr[0];
            arr[0] = arr[arr.size()-1];
            arr.pop_back();
            siftDown(0);
        }
        //cerr << "extractRoot(" << result << ")" << endl;
        return result;
    }
    void siftUp(int i)
    {
        //cerr << "entered siftUp" << endl;
        while(i > 0 && compareNums(arr[parent(i)],arr[i]))
        {
            //cerr << "i = " << i << endl;
            swap(arr[parent(i)],arr[i]);
            i = parent(i);
        }
    }
    void siftDown(int i)
    {
        //cerr << "executing siftDown(" << i << ")" << endl;
        int largest = i;
        int l = 2*i+1;
        int r = 2*i+2;
        if(l < arr.size() && compareNums(arr[largest],arr[l]))
            largest = l;
        if(r < arr.size() && compareNums(arr[largest],arr[r]))
            largest = r;
        if(largest != i)
        {
            swap(arr[i], arr[largest]);
            //cerr << "calling siftDown(" << largest << ")" << endl;
            siftDown(largest);
        }
    }
    void buildHeap()
    {
        //cerr << "executing buildHeap()" << endl;
        int startIdx = arr.size()/2 - 1;
        for(int i = startIdx; i >= 0; i--)
            siftDown(i);
    }
    void printHeap()
    {
        //cerr << "printing the heap:" << endl;
        for(int i=0;i<arr.size();i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
};

int main()
{
    priority_queue<int> h;
    prd
    return 0;
}


