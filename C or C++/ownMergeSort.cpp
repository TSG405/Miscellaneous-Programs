#include <bits/stdc++.h>

using namespace std;
int n;
int a[100000];
int temp[100000];

bool compareNums(int x, int y)
{
    return x < y;
}

void Merge2(int s,int md,int e)
{
    int tmp = 0;
    int i=s,j=md+1;
    while(i <= md && j <= e)
    {
        if(compareNums(a[i],a[j]))
            temp[tmp++] = a[j++];
        else
            temp[tmp++] = a[i++];
    }
    while(i <= md)
        temp[tmp++] = a[i++];
    while(j <= e)
        temp[tmp++] = a[j++];
    for(i=0;i < tmp;i++)
        a[s+i] = temp[i];
}

void MergeSort(int l,int h)
{
    if(l < h)
    {
        int mid = (h+l)/2;
        MergeSort(l,mid);
        MergeSort(mid+1,h);
        Merge2(l,mid,h);
    }
}

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    MergeSort(0,n-1);
    cout << endl;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}
