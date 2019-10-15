#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool bfs(list<ll> adj[],ll n,ll s,bool vis[])
{
	ll parent[n],ctr=0;
	memset(parent,0,sizeof(parent));
	parent[s]=-1;
	list<ll> q;
	q.push_back(s);
	vis[s]=true;
	while(!q.empty())
	{
		s=q.front();
		q.pop_front();
		list<ll>::iterator it;
		for(it=adj[s].begin();it!=adj[s].end();++it)
		{
			if(!vis[*it])
			{
				parent[*it]=s;
				vis[*it]=true;
				q.push_back(*it);
			}
			else
			{
		//		cout<<s<<' '<<*it<<' '<<parent[s]<<endl;
				if(*it!=parent[s])
				ctr++;
			}
		}
	//	cout<<endl;
	}
	if(ctr==2)
	return true;
	else return false;
}
int main()
{
	ll i,j,k,m,n;
	cin>>n>>m;
	list<ll> adj[n];
	for(i=0;i<m;i++)
	{
		cin>>j>>k;
		adj[j-1].push_back(k-1);
		adj[k-1].push_back(j-1);
	}
	bool vis[n];
	memset(vis,false,sizeof(vis));
	bool flag=bfs(adj,n,0,vis);
	for(i=0;i<n;i++)
	if(vis[i]==false)
	flag=false;
	if(flag)
	cout<<"FHTAGN!";
	else cout<<"NO";
}