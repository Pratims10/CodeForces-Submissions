#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[200001],n;
list<ll> adj[200001];
bool vis[200001];
ll dp[200001]={0},val[200001]={0},ans[200001]={0};
void reroot(ll x)
{
	vis[x]=true;
	ans[x]=val[x];
	for(auto to:adj[x])
	{
		if(!vis[to])
		{
			val[x]-=val[to]+ar[to]+dp[to];
			dp[x]-=ar[to]+dp[to];
			dp[to]+=ar[x]+dp[x];
			val[to]+=val[x]+ar[x]+dp[x];
			reroot(to);
			val[to]-=val[x]+ar[x]+dp[x];
			dp[to]-=ar[x]+dp[x];
			dp[x]+=ar[to]+dp[to];
			val[x]+=val[to]+ar[to]+dp[to];
		}
	}
}
void dfs(ll x)
{
	vis[x]=true;
	ll m=0;
	for(auto to:adj[x])
	{
		if(!vis[to])
		{
			dfs(to);
			dp[x]+=ar[to]+dp[to];
		}
	}
}
void dfs2(ll x)
{
	vis[x]=true;
	ll m=0;
//	cout<<x<<' ';
	for(auto to:adj[x])
	{
		if(!vis[to])
		{
			dfs2(to);
			val[x]+=val[to];
		}
	}
	val[x]+=dp[x];
}
int main()
{
	ll i,j,k,m,t;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;k--;
		adj[k].push_back(j);
		adj[j].push_back(k);
	}
	memset(vis,false,sizeof(vis));
	dfs(0);
	memset(vis,false,sizeof(vis));
	dfs2(0);
	memset(vis,false,sizeof(vis));
	reroot(0);
	ll mm=0;
	for(i=0;i<n;i++)
	mm=max(mm,ans[i]);
	cout<<mm;
}