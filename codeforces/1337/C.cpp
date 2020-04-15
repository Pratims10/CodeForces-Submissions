#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool vis[200001];
list<ll> adj[200001];
ll dist[200001],sub[200001];
void dfs(ll x)
{
	vis[x]=true;
	sub[x]=1;
	for(auto i: adj[x])
	{
		if(!vis[i])
		{
			dist[i]=dist[x]+1;
			dfs(i);
			sub[x]+=sub[i];
		}
	}
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>m;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	dist[0]=1;
	memset(sub,0,sizeof(vis));
	memset(vis,false,sizeof(vis));
	dfs(0);
	priority_queue<ll> pq;
	for(i=0;i<n;i++)
	pq.push(dist[i]-sub[i]);
	ll ans=0;
	while(m>0)
	{
		ans+=pq.top();
		pq.pop();
		m--;
	}
	cout<<ans;
}