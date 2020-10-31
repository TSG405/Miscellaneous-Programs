/*
 * initialise the arrays
 */
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        map<char,int> p;
        string s;
        cin >> s;
        
        for(auto i=s.begin();i < s.end();i++)
            p[*i]++;
        int m;
        cin >> m;
        vector<int> b(m);
        int max=0,min=1225;
        for(int k=0;k<m;k++)
        {
            cin >> b[i];
            if(b[i] > max)
                max = b[i];
            if(b[i] < min)
                min = b[i];
        }
        int alp[m];
        char pod[m];
        map<char,int>::iterator r = p.begin();
        for(int j=0;j<m;j++)
        {
            vector<int>::iterator g = b.begin();
            int mn,indx=0;
            int h=0;
            for(string::iterator k = s.begin();k < s.end();k++)
            {
                if(mn > *k)
                {
                    mn = *k;
                    g = k;
                    indx = h;
                }
                h++;
            }
            pod[indx] = r->first;
            r->second -= 1;
            if(r->second == 0)
                r++;
        }
    }
}
