#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[50000];
ll dp1[50001][501],dp[50001][501];
ll n,k;
void dfs1(ll x,ll par)
{
	dp1[x][0]=1;
	for(auto i:adj[x])
	{
		if(i!=par)
		{
			dfs1(i,x);
			for(ll ii=1;ii<=k;ii++)
			dp1[x][ii]+=dp1[i][ii-1];
		}
	}
}

void dfs2(ll x,ll par)
{
	if(x!=0)
	{
		dp[x][0]=1;
		dp[x][1]=adj[x].size();
		for(ll ii=2;ii<=k;ii++)
		{
			dp[x][ii]=dp1[x][ii]+dp[par][ii-1]-dp1[x][ii-2];
		}
	}
	for(auto i:adj[x])
	{
		if(i!=par)
		{
			dfs2(i,x);
		}
	}
}

int main()
{
	ll i,j,m;
	cin>>n>>k;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=k;j++)
		dp1[i][j]=0,dp[i][j]=0;
	}
	for(i=0;i<n-1;i++)
	{
		ll a,b;
		cin>>a>>b;
		a--,b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs1(0,-1);
	for(i=0;i<=k;i++)
	dp[0][i]=dp1[0][i];
	dfs2(0,-1);
	ll ans=0;
	for(i=0;i<=n;i++)
	{
		ans+=dp[i][k];
	}
	ans/=2;
	cout<<ans;
}