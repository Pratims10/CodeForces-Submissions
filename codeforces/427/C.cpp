#include <bits/stdc++.h>
using namespace std;
#define ll int
ll ar[100001];
ll mod=1e9+7;
vector<ll> vec;
class Graph
{
	int V;
	list<int> *adj;
	void fillOrder(int v, bool visited[], stack<int> &Stack);
	void DFSUtil(int v, bool visited[]);
public:
	Graph(int V);
	void addEdge(int v, int w);
	void printSCCs();
	Graph getTranspose();
};
Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::DFSUtil(int v, bool visited[])
{
	visited[v] = true;
	vec.push_back(v);
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i, visited);
}

Graph Graph::getTranspose()
{
	Graph g(V);
	for (int v = 0; v < V; v++)
	{
		list<int>::iterator i;
		for(i = adj[v].begin(); i != adj[v].end(); ++i)
		{
			g.adj[*i].push_back(v);
		}
	}
	return g;
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}
void Graph::fillOrder(int v, bool visited[], stack<int> &Stack)
{
	visited[v] = true;
	list<int>::iterator i;
	for(i = adj[v].begin(); i != adj[v].end(); ++i)
		if(!visited[*i]) fillOrder(*i, visited, Stack);
	Stack.push(v);
}
void Graph::printSCCs()
{
	stack<int> Stack;
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++)
		visited[i] = false;
	for(int i = 0; i < V; i++)
		if(visited[i] == false)
			fillOrder(i, visited, Stack);
	Graph gr = getTranspose();
	for(int i = 0; i < V; i++)
		visited[i] = false;
	long long int ans=0,p=1;
	while (Stack.empty() == false)
	{
		int v = Stack.top();
		Stack.pop();
		if (visited[v] == false)
		{
			vec.clear();
			gr.DFSUtil(v, visited);
			map<ll,ll> mp;
			for(auto qq:vec)
			{
				mp[ar[qq]]++;
				//cout<<qq<<' ';
			}
			//cout<<endl;
			for(auto qq:mp)
			{
				ans+=qq.first;
				p*=qq.second;
				p%=mod;
				break;
			}
		}
	}
	cout<<ans<<' '<<p<<endl;
}
int main()
{
	ll n,m,i,j,k;
	cin>>n;
	Graph g(n);
	for(i=0;i<n;i++) cin>>ar[i];
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>j>>k;
		j--,k--;
		g.addEdge(j,k);
	}
	g.printSCCs();
}