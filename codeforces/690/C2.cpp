#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
list<ll> adj[100000];
ll ar[100000],dis[100000];
bool vis[100000];
void dfs(ll x)
{
	vis[x]=true;
	for(auto i:adj[x])
	{
		if(!vis[i])
		{
			dis[i]=dis[x]+1;
			dfs(i);
		}
	}
}
int main()
{
	ll i,j,k,m,t;
	cin>>n>>m;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	memset(vis,false,sizeof(vis));
	dis[0]=0;
	dfs(0);
	ll mx=0,pos;
	for(i=0;i<n;i++)
	{
		if(mx<dis[i])
		{
			mx=dis[i];
			pos=i;
		}
	}
	memset(vis,false,sizeof(vis));
	dis[pos]=0;
	dfs(pos);
	mx=0;
	for(i=0;i<n;i++)
	mx=max(mx,dis[i]);
	cout<<mx;
}