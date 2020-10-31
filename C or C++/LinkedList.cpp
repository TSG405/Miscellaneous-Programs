#include <iostream>
#include <new>

using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *HEAD = NULL;
void insert(int n)
{
    Node *k = (Node*)malloc(sizeof(Node));
    k->data = n;
    k->next = HEAD;
    HEAD = k;
}
void display()
{
    for(Node *j = HEAD; j != NULL;j = j->next)
        cout << j->data << " ";
    cout << endl;
}
void UltaFy()
{
    //reversing a linked list
    Node *x = NULL,*k=NULL;
    cout << "reversed" << endl;
    Node *i = HEAD;
    while(i != NULL)
    {
        cout << "data = " << i->data << "\n";
        k = i->next;
        i->next = x;
        x = i;
        i = k;
    }
    HEAD = x;
}
int main()
{
    int n;
    cout << "Enter limit: ";
    cin >> n;
    for(int i=0;i<n;i++)
        insert(i+1);
    display();
    UltaFy();
    display();
    return 0;
}
