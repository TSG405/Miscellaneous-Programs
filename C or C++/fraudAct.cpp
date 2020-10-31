#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::vector;
using std::ios_base;
using std::stack;
using std::unordered_map;
using std::queue;
using std::endl;
#define MX 100000
queue<int> qu;
int expenses[MX];
int n,d;


bool checkIfFraud(int e)
{
    cout << "fraudcheck" << endl;
    queue<int> st;
    unordered_map<int,int> bt;
    int mx=0;
    for(int i=qu.front();i!=qu.back();i++)
    {
        bt[i] = 0;
    }
    cout << "current elements of queue: ";
    for(int i=qu.front();i!=qu.back();i++)
    {
        mx = (i > mx)? i:mx;
        st.push(i);
        bt[i]++;
        cout <<  i << " ";
        //i = qu.front();
    }
    cout << endl;
    vector<int> srt;
    for(int i=0;i<=mx;i++)
    {
        if(bt.find(i) != bt.end())
        {
            while(bt[i] > 0)
            {
                srt.push_back(i);
                bt[i]--;
            }
        }
    }
    cout << "completed sorting" << endl;
    float med;
    if(srt.size()%2 == 1)
        med = srt[(srt.size()-1)/2];
    else
        med = (srt[srt.size()/2] + srt[srt.size()/2 + 1])/2;
    for(int i=st.front();i!=st.back();st.pop())
        qu.push(i);
    if(2*med < e)
        return true;
    return false;
}

void solve()
{
    cin >> n >> d;
    int e,k=0,ctr=0;
    for(int i=0;i<n;i++)
    {
        cin >> e;
        k++;
        if(k > d)
        {
            cout << "check if block e = " << e << endl;
            bool j = checkIfFraud(e);
            if(j == true)
                ctr++;
            qu.pop();
            cout << "ctr = " << ctr << endl;
        }
        qu.push(e);
    }
    cout << ctr << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
