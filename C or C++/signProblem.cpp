#include <bits/stdc++.h>
#define MX 100000
using std::cin;
using std::cout;
using std::endl;
using std::unordered_map;
using std::ios_base;
using std::queue;
using std::min;
using std::max;
using std::bitset;
using std::cerr;


int n;
char c[MX+1];
int a[MX+1];
bitset<1> ch[MX+1];
struct Node
{
    int index;
    Node *left, *right;
};
queue<int> q;
void get_process()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> c[i];
    a[0] = 0;
    int crr = 0;
    int mx = INT_MIN,mn = INT_MAX;
    for(int i=1;i<n+1;i++)
    {
        if(c[i-1] == '<')
        {
            a[i] = ++crr;
        }
        if(c[i-1] == '>')
        {
            a[i] = --crr;
        }
        mn = min(mn,a[i]);
        mx = max(mx,a[i]);
    }
    for(int i=0;i<n;i++)
        a[i] -= mn;
    //cerr << "completed accepting and creating array a" << endl;
}
void initialise(int i)
{
    q.push(i);
}
void makeQueue()
{
    //cerr << "making queue" << endl;
    for(int i=0;i<n+1;i++)
    {
        if(i == 0)
        {
            if(a[1] > a[0])
                initialise(0);
            if(a[0] > a[1])
                ch[0] = 1;
            continue;
        }
        if(i == n)
        {
            if(a[n] < a[n-1])
                initialise(n);
            if(a[n] > a[n-1])
                ch[n] = 1;
            continue;
        }
        if(a[i-1] > a[i] && a[i] < a[i+1])
            initialise(i);
        if(a[i-1] < a[i] && a[i] > a[i+1])
            ch[i] = 1;
    }
    cerr << "made queue" << endl;
}
bool checkPeak(int i)
{
    if(i == 0)
    {
        cerr << "checkPeak(" << i << ") = " << true << endl;
        return true;
    }
    if(i == n)
    {
        cerr << "checkPeak(" << i << ") = " << true << endl;
        return true;
    }
    if(a[i-1] < a[i] && a[i] > a[i+1])
    {
        cerr << "checkPeak(" << i << ") = " << true << endl;
        return true;
    }
    cerr << "checkPeak(" << i << ") = " << false << endl;
    return false;
}
int begnum = 0;
void makeNum()
{
    int x,i;
    while(!q.empty())
    {
        x = q.front();
        cerr << "travelling queue x = " << x << endl;
        if(x > 0 && x <= n)
        {
            i = x+1;
            do
            {
                i--;
                a[i] = begnum;
                //ch[i] = 1;
                cerr << "a[" << i << "] = " << a[i] << ", begnum = " << begnum << endl;
                begnum++;
                
            }while(i > 0 && ch[i] == 0);
            cerr << "completed first loop" << endl;
            i = x+1;
            while(ch[i] == 0 && i <= n)
            {
                a[i] = begnum;
                cerr << "a[" << i << "] = " << a[i] << ", begnum = " << begnum << endl;
                begnum++;
                ch[i] = 1;
                i++;
            }
            cerr << "completed second loop" << endl;
        }
        q.pop();
    }
    for(i=0;i<=n;i++)
        c[i] = (char)(a[i] + 97);
}
void printC()
{
    cerr << "printing ch: ";
    for(int i=0;i<=n;i++)
        cout << a[i] << " ";
    cerr << endl;
    for(int i=0;i<=n;i++)
        cout << c[i] << " ";
    
    cout << endl;
}
void displayQueue()
{
    queue<int>bc;
    while(!q.empty())
    {
        int x = q.front();
        cout << x << " ";
        bc.push(x);
        q.pop();
    }
    cout << endl;
    while(!bc.empty())
    {
        int x = bc.front();
        q.push(x);
        bc.pop();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    get_process();
    printC();
    makeQueue();
    displayQueue();
    printC();
    makeNum();
    printC();
}
