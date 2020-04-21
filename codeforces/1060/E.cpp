#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll n;
list<ll> adj[200001];
ll sub[200001],dis[200001];
ll ans=0;
void dfs(ll x,ll par)
{
	sub[x]=1;
	for(auto i:adj[x])
	{
		if(i==par) continue;
		dis[i]=dis[x]+1;
		dfs(i,x);
		sub[x]+=sub[i];
	}
}
void dfs2(ll x,ll par)
{
	for(auto i:adj[x])
	{
		if(i==par) continue;
		ans+=sub[i]*(n-sub[i]);
		dfs2(i,x);
	}
}
int main()
{
	ll i,j,k;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;k--;
		adj[j].pb(k);
		adj[k].pb(j);
	}
	dis[0]=0;
	dfs(0,-1);
	ll o=0;
	for(i=0;i<n;i++)
	if(dis[i]%2) o++;
	ans=o*(n-o);
	dfs2(0,-1);
	ans/=2;
	cout<<ans;
}