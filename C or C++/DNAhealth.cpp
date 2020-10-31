#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long
#define MX 100000

using std::cin;
using std::cout;
using std::cerr;
using std::floor;
using std::ceil;
using std::vector;
using std::ios_base;
using std::unordered_map;
using std::map;
using std::endl;
using std::stack;
using std::queue;
using std::max;
using std::min;
using std::deque;
using std::bitset;
using std::set;
using std::sort;
using std::hash;
using std::pair;
using std::make_pair;
using std::string;
using std::swap;
using std::hash;

//hash function for a pair
struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
//currently mapped s: pair<any dt,any dt>->bool with custom hash function as hash_pair
//change data types of pair and mapped value accordingly
unordered_map<pair<int,int>,bool,hash_pair> pair_mp;
vector<string> g;
int h[MX];
int n,s;
struct DNA
{
    int first;
    int last;
    string d;
};
struct Sorting
{
    int n,a[MX];
    void acceptN()
    {
        cin >> n;
    }
    void acceptarray()
    {
        for(int i=0;i<n;i++)
            cin >> a[i];
    }
    bool comp(int x,int y)
    {
        return x < y;
    }
    void Merge(int low, int high, int mid)
    {
    	int i, j, k, temp[high-low+1];
    	i = low;
    	k = 0;
    	j = mid + 1;
    	while (i <= mid && j <= high)
    	{
    		if(comp(a[i],a[j]))
    			temp[k++] = a[i++];
    		else
    			temp[k++] = a[j++];
    	}
    	while (i <= mid)
    		temp[k++] = a[i++];
    	while (j <= high)
    		temp[k++] = a[j++];
    	for (i = low; i <= high; i++)
    		a[i] = temp[i-low];
    }
    void MSrt(int low, int high)
    {
    	int mid;
    	if (low < high)
    	{
    		mid=(low+high)/2;
    		MSrt(low, mid);
    		MSrt(mid+1, high);
    		Merge(low, high, mid);
    	}
    }
    void MergeSort()
    {
        MSrt(0,n-1);
    }
    int Partition(int low, int high)
    {
    	int pivot=high, index=low, i;
    	for(i=low; i < high; i++)
    	{
    		if(a[i] < a[pivot])
    		{
    			swap(a[i], a[index]);
    			index++;
    		}
    	}
	    swap(a[pivot], a[index]);
    	return index;
    }
    int RandomPivotPartition(int low, int high)
    {
    	int pvt, n, temp;
    	n = rand();
    	pvt = low + n%(high-low+1);
    	swap(a[high],a[pvt]);
    	return Partition(low, high);
    }
    void QS(int low, int high)
    {
    	int pindex;
    	if(low < high)
    	{
    		pindex = RandomPivotPartition(low, high);
    		QS(low, pindex-1);
    		QS(pindex+1, high);
    	}
    }
    void QuickSort()
    {
        QS(0,n-1);
    }
};
//to implement this code, just call: Mergesort(&<array>,0,length-1);

struct Heap     // 0-indexed heap
{
    vector<int> arr; // holds the elements of the array - change to int if required
    bool heaptype;
    vector<int> sorted; // holds sorted array
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
        //cerr << "executed compareNums(" << a << ", " << b << ") = " << decision << endl;
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
        int result = INT_MIN;
        if(arr.empty())
            cerr << "ROOT DOES NOT EXIST\nHEAP IS EMPTY\nCHECK YOUR CODE" << endl; 
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
    void buildSorted()
    {
        for(int i=0;i<arr.size();i++)
        {
            sorted.push_back(arr[0]);
            if(heaptype)
                arr[0] = INT_MAX;
            else
                arr[0] = INT_MIN;
            siftDown(0);
        }
    }
    void displaySorted()
    {
        for(int i=0;i<sorted.size();i++)
            cout << sorted[i] << " ";
        cout << endl;
    }
};
struct Graph
{
    unordered_map<int,  vector<int>> gph;
    unordered_map<int, vector<int>> rev_gph;
    stack<int> s;
    unordered_map<int, vector<int>> final_DAG;
    vector<int> node_to_scc;
    unordered_map<int,bool> visited;
    int ind=0,E,V;
    void resetVisit()
    {
        for(int i=0;i<V;i++)
            visited[i] = false;
    }
    void insertToGraph(int node,int target)
    {
        gph[node].push_back(target);
        //rev_gph[target].push_back(node);
        //gph[target].push_back(node);
    }
    void firstKRaju(int i)
    {
        visited[i] = true;
        for(auto j = gph[i].begin();j!=gph[i].end();j++)
            if(!visited[*j])
                firstKRaju(*j);
        s.push(i);
    }
    void krjDFS(int v)
    {
        final_DAG[ind].push_back(v);
        node_to_scc[v] = ind;
        visited[v] = true;
        for(auto i=rev_gph[v].begin();i!=rev_gph[v].end();i++)
        {
            if(!visited[*i])
                krjDFS(*i);
        }
    }
    void secondKRaju()
    {
        int v;
        while(!s.empty())
        {
            v = s.top();
            s.pop();
            if(!visited[v])
            {
                krjDFS(v);
                ind++;
            }
        }
    }
    void kosaraju()
    {
        /*
        indexing from 0; no of vertices = V and number of edges = E;
        graph = gph; transpose graph = rev_gph
        calling kosaraju() initialises the graphs final_DAG and node_to_scc
        call insertToGraph(node,target) to insert elements into the graph - do not write other code to do so
        */
        for(int i=0;i<E;i++)
            visited[i] = false;
        for(int i=0;i<E;i++)
        {
            if(!visited[i])
                firstKRaju(i);
        }
        for(int i=0;i<E;i++)
            visited[i] = false;
        secondKRaju();
    }
    
    void graph_dfs(int i)
    {
        visited[i] = true;
        for(auto p = gph[i].begin();p!= gph[i].end();p++)
        {
            //put the code here: following is just a sample code
            if(visited[*p] == false)
                graph_dfs(*p);
        }
    }
    void graph_bfs(int x)
    {
        //executes bfs in the graph starting from the node x
        int u;
        unordered_map<int,int> dist;//pointer to store dist. of each node from x; change to bool if not counting
        for(int i=0;i<V;i++)
            dist[i] = -1;//default value
        dist[x] = 0;
        queue<int> qu;
        qu.push(x);
        while(!qu.empty())
        {
            u = qu.front();
            qu.pop();
            //cout << "discovered edge = " << u << endl;
            for(auto r = gph[u].begin();r!=gph[u].end();r++)
            {
                if(dist[*r] == -1)//marker if node r is unchecked
                {
                    qu.push(*r);
                    dist[*r] = dist[u]+1; //computing dist. of node. change map to bool if distance is not needed
                        //write relevant code here

                }
            }
        }
    }
}; 
int gcd(int a,int b)
{
    int t;
    while((a != 0)&&(b != 0))
    {
        t = a%b;
        a = b;
        b = t;
    }
    return a+b;
}
unordered_map<string,int> gene_health;
DNA ob[MX];

int countHealth(int s, int l, string q)
{
    int cnt[q.size()+1];
    cnt[0] = 0;
    for(int i=1;i<=q.length();i++)
    {
        cnt[i] = 0;
        for(int j = s;j <= l;j++)
        {
            if(i >= g[j].size())
            {
                int x = cnt[i-g[i].size()] + h[i];
                if(x > cnt[i])
                    cnt[i] = x;
            }
        }
    }
    return cnt[q.size()];
}
vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) { return x == y and x == ' '; });
    input_string.erase(new_end, input_string.end());
    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }
    vector<string> splits;
    char delimiter = ' ';
    size_t i = 0;
    size_t pos = input_string.find(delimiter);
    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));
        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }
    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
    return splits;
}
void solve()
{
    cin >> n;
    /*
    string bf;
    cin >> bf;
    
    int ci = 0;
    */
    /*
    g[0] = "";
    for(auto i = bf.begin();i!= bf.end();i++)
    {
        if(*i != ' ')
            g[ci].push_back(*i);
        else
        {
            ci++;
            g[ci] = "";
        }
        
    }
    */
    //g = split_string(bf);
    g = {"a", "b", "c", "aa", "d", "b"};
    int ci = 0;
    for(int i=0;i<n;i++)
    {
        //cerr << "entered accepting block" << endl;
        cin >> h[i];
        //gene_health[g[i]] = h[i];
    }
    cin >> s;
    for(int i=0;i<s;i++)
    {
        //cerr << "initilalising objects" << endl;
        DNA w;
        cin >> w.first >> w.last >> w.d;
        ob[i] = w;
    }
    //completed accepting data elements
    //now evaluating each case
    int mx = -1,mn=INT_MAX;
    for(int i=0;i<s;i++)
    {
        ci = countHealth(ob[i].first,ob[i].last,ob[i].d);
        cout << "ci = " << ci << endl;
        mx = max(ci,mx);
        mn = min(ci,mn);
    }
    cout << mn << " " << mx << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
