#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[100001];
ll dp[100001][21];
ll n;
ll lvl[100001];
ll val[100001];
map<pair<ll,ll>,ll> mp;
ll sub[100001];

void dfs(ll x,ll par)
{
	dp[x][0]=par;
	for(auto i:adj[x])
	{
		if(i==par) continue;
		lvl[i]=lvl[x]+1;
		dfs(i,x);
	}
}

void dfs2(ll x,ll par)
{
	sub[x]=val[x];
	for(auto i:adj[x])
	{
		if(i==par) continue;
		dfs2(i,x);
		sub[x]+=sub[i];
		mp[{min(i,x),max(i,x)}]=sub[i];
	}
}

ll lca(ll x,ll y)
{
	if(lvl[x]<lvl[y])
	swap(x,y);
	for(ll i=20;i>=0;i--)
	{
		if(lvl[x]-(1ll<<i)>=lvl[y])
		x=dp[x][i];
	}
	if(x==y)
	return x;
	for(ll i=20;i>=0;i--)
	{
		if(dp[x][i]!=dp[y][i])
		x=dp[x][i],y=dp[y][i];
	}
	return dp[x][0];
}

int main()
{
	ll i,j,k,m,t;
	cin>>n;
	vector<pair<ll,ll>> v;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--,k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
		v.push_back({j,k});
	}
	lvl[0]=0;
	dfs(0,0);
	for(j=1;j<=20;j++)
	{
		for(i=0;i<n;i++)
		{
			dp[i][j]=dp[dp[i][j-1]][j-1];
		}
	}
	cin>>t;
	while(t--)
	{
		cin>>i>>j;
		i--,j--;
		val[lca(i,j)]-=2;
		val[i]++;
		val[j]++;
	}
	dfs2(0,-1);
	for(auto x:v)
	{
		//cout<<x.first.first+1<<' '<<x.first.second+1<<' '<<x.second<<endl;
		cout<<mp[{min(x.first,x.second),max(x.first,x.second)}]<<' ';
	}
}