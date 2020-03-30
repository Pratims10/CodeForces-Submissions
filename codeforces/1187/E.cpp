#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
bool vis[200001];
list<ll> adj[200001];
ll s[200001],dp[200001],ans[200001];
ll mx=0;
void reroot(ll x)
{
	vis[x]=true;
	ans[x]=dp[x];
	for(auto i:adj[x])
	{
		if(!vis[i])
		{
			dp[x]-=dp[i]+s[i];
			s[x]-=s[i];
			s[i]+=s[x];
			dp[i]+=dp[x]+s[x];
			reroot(i);
			dp[i]-=dp[x]+s[x];
			s[i]-=s[x];
			s[x]+=s[i];
			dp[x]+=dp[i]+s[i];
		}
	}
}
void dfs1(ll x)
{
	vis[x]=true;
	for(auto to:adj[x])
	{
		if(!vis[to])
		{
			dfs1(to);
			dp[x]+=dp[to]+s[to];
		}
	}
	dp[x]+=1;
}
void dfs(ll x)
{
	vis[x]=true;
	ll sum=0;
	for(auto i:adj[x])
	{
		if(!vis[i])
		{
			dfs(i);
			sum+=s[i];
		}
	}
	s[x]=sum+1;
}
int main()
{
	ll i,j,k;
	cin>>n;
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
	{
		vis[i]=false;
		dp[i]=0;
	}
	dfs1(0);
	ans[0]=dp[0];
	memset(vis,false,sizeof(vis));
	reroot(0);
	ll mxx=0;
	for(i=0;i<n;i++)
	mxx=max(mxx,ans[i]);
	cout<<mxx;
}