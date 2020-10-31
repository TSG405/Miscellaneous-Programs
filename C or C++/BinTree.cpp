#include <iostream>
#include <bits/c++io.h>
#include <new>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Node
{
    public:
    Node *left,*right,*parent;
    int key;
    int data;
    Node()
    {
        key=0;
        data=0;
    }
    Node(int key,int data)
    {
        this->key = key;
        this->data = data;
        left=NULL;
        right=NULL;
        parent=NULL;
    }
    void setKey(int k)
    {
        key = k;
    }
    void setData(int n)
    {
        data = n;
    }
};
void initialiseRoot(int key,int value)
{
    Node k(key,value);

}
void displayHeap(Node *root, int n)
{
    if(root != NULL)
    {
        displayHeap(root->left,n-1);
        cout << root->data;
        displayHeap(root->right,n-1);
    }
}
void implementMaxHeap()
{
    int ch=1;
    Node lastEntered,root;
    int elementCount=0;
    while(ch != 0)
    {
        cout << "1 - push to heap, 2 - display heap; enter choice: ";
        cin >> ch;
        if(ch == 1)
        {
            int key,val;
            cout << "Enter key and data to be stored separated by a space: ";
            cin >> key >> val;
            Node newnode(key,val);
            elementCount++;
            if(elementCount == 0)
            {
                lastEntered = newnode;
                lastEntered.parent = NULL;
                root = lastEntered;
            }
            else
            {
                if(lastEntered.left == NULL)
                    lastEntered.left = &newnode;
                else
                    lastEntered.right = &newnode;
                newnode.parent = &lastEntered;
                   while(newnode.key > (*newnode.parent).key)
                   {
                       int k = newnode.key,v=newnode.data,kp=(*newnode.parent).key,kv=(*newnode.parent).data;
                       newnode.setKey(kp);
                       newnode.setData(kv);
                       newnode = *newnode.parent;
                       newnode.setKey(k);
                       newnode.setData(v);
                   }
                   //newnode.parent = &lastEntered;
               }
           }
           if(ch == 2)
               displayHeap(&root,elementCount);
           if((ch != 1)&&(ch != 2))
               cout << "Wrong choice\n";
           //display the heap:      
    }
}

int main()
{
    implementMaxHeap();
    return 0;
}
