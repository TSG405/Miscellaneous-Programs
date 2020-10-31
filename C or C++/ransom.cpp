#include <iostream>
#include <vector>
#include <unordered_map>
#define two_space(a,b) cout << a << " " << b << endl;
#define one_line(k) cout << k << endl;
using namespace std;

void check(vector<string> magazine, vector<string> note)
{
    unordered_map<string,int> mg;
    unordered_map<string,int> nt;
    for(auto i=magazine.begin();i != magazine.end();i++)
    {
        mg[*i]++;
    }
    for(auto i=note.begin();i != note.end();i++)
    {
        nt[*i]++;
    }
    bool gt = false;
    for(auto i=note.begin();!gt && i != note.end();i++)
    {
        if(mg.find(*i) == mg.end())
            gt = true;
        else
        {
            mg[*i]--;
            nt[*i]--;
            if(mg[*i] < 0 || nt[*i] < 0)
                gt = true;
        }
    }
    if(gt)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    int n,m;
    string s;
    cin >> m >> n;
    vector<string> mag;
    vector<string> note;
    for(int i=0;i<m;i++)
    {
        cin >> s;
        mag.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        cin >> s;
        note.push_back(s);
    }
    check(mag,note);
    return 0;
}
