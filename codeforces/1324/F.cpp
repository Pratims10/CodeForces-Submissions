#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
bool vis[200001];
list<ll> adj[200001];
ll ar[200001],dp[200001];
void reroot(ll x)
{
	vis[x]=true;
	for(auto i:adj[x])
	{
		if(vis[i])
		continue;
		dp[x]-=max((ll)0,dp[i]);
		dp[i]+=max((ll)0,dp[x]);
		ar[i]=dp[i];
		reroot(i);
		dp[i]-=max((ll)0,dp[x]);
		dp[x]+=max((ll)0,dp[i]);
	}
}
void dfs(ll x)
{
	vis[x]=true;
	ll mx=0;
	for(auto i:adj[x])
	{
		if(!vis[i])
		{
			dfs(i);
			mx+=max((ll)0,dp[i]);
		}
	}
	dp[x]=ar[x]+mx;
}
int main()
{
	ll i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		if(ar[i]==0)
		ar[i]=-1;
	}
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;
		k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
		vis[i]=false;
	}
	vis[i]=false;
	dfs(0);
	for(i=0;i<n;i++)
	vis[i]=false;
	ar[0]=dp[0];
	reroot(0);
	for(i=0;i<n;i++)
	cout<<ar[i]<<' ';
}