#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define INF 0x3f3f3f3f 
struct Edge 
{ 
    int u; 
    int v; 
    int weight; 
};
class Graph
{
    int V ;
    list < pair <int, int > >*adj;
    vector < Edge > edge; 
public : 
    Graph( int V ) 
    { 
        this->V = V ; 
        adj = new list < pair <int, int > >[V]; 
    } 
    void addEdge ( int u, int v, int w ); 
    void removeEdge( int u, int v, int w ); 
    int  ShortestPath (int u, int v ); 
    void RemoveEdge( int u, int v ); 
    int FindMinimumCycle (); 
};
void Graph :: addEdge ( int u, int v, int w )
{
    adj[u].push_back( make_pair( v, w )); 
    adj[v].push_back( make_pair( u, w )); 
    Edge e { u, v, w }; 
    edge.push_back (  e ); 
}
void Graph :: removeEdge ( int u, int v, int w ) 
{ 
    adj[u].remove(make_pair( v, w )); 
    adj[v].remove(make_pair(u, w )); 
}
int Graph :: ShortestPath ( int u, int v ) 
{
    set< pair<int, int> > setds;
    vector<int> dist(V, INF);
    setds.insert(make_pair(0, u)); 
    dist[u] = 0; 
    while (!setds.empty()) 
    {
        pair<int, int> tmp = *(setds.begin()); 
        setds.erase(setds.begin()); 
        int u = tmp.second; 
        list< pair<int, int> >::iterator i; 
        for (i = adj[u].begin(); i != adj[u].end(); ++i) 
        {
            int v = (*i).first; 
            int weight = (*i).second; 
            if (dist[v] > dist[u] + weight) 
            {
                if (dist[v] != INF) 
                    setds.erase(setds.find(make_pair(dist[v], v))); 
                dist[v] = dist[u] + weight; 
                setds.insert(make_pair(dist[v], v)); 
            } 
        } 
    }
    return dist[v] ; 
}
int Graph :: FindMinimumCycle ( ) 
{ 
    int min_cycle = INT_MAX; 
    int E = edge.size(); 
    for ( int i = 0 ; i < E  ; i++ ) 
    {
        Edge e = edge[i];
        removeEdge( e.u, e.v, e.weight ) ;
        int vistance = ShortestPath( e.u, e.v );
        min_cycle = min( min_cycle, vistance + e.weight );
        addEdge( e.u, e.v, e.weight ); 
    }
    return min_cycle ; 
}
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll bi[n][64]={0};
	for(i=0;i<n;i++)
	{
		ll size=0,x=ar[i];
		while(x!=0)
		{
			bi[i][size++]=x%2;
			x/=2;
		}
	}
	for(i=0;i<64;i++)
	{
		ll ctr=0;
		for(j=0;j<n;j++)
		{
			if(bi[j][i]==1)
			ctr++;
		}
		if(ctr>2)
		{
			cout<<3;
			return 0;
		}
	}
	Graph g(n);
	for(i=0;i<64;i++)
	{
		ll ctr=0,p=-1,q=-1;
		for(j=0;j<n;j++)
		{
			if(bi[j][i]==1)
			{
				ctr++;
				if(p==-1)
				p=j;
				else if(q==-1)
				q=j;
			}
		}
		if(ctr==2)
		{
			g.addEdge(p,q,1);
		}
	}
	ll x=g.FindMinimumCycle();
	if(x>n)
	x=-1;
	cout << x << endl;
}