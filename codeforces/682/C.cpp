#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[100000];
list<pair<ll,ll> > adj[100000];
ll sub[100000],dis[100000];
ll ans=0;
void dfs(ll x ,ll par)
{
	sub[x]=1;
	for(auto i:adj[x])
	{
		if(i.first!=par)
		{
			dis[i.first]=dis[x]+i.second;
			dfs(i.first,x);
			sub[x]+=sub[i.first];
		}
	}
}
void dfs2(ll x,ll par,ll mn)
{
	if(dis[x]-mn>ar[x])
	{
		ans+=sub[x];
		return ;
	}
	for(auto i:adj[x])
	{
		if(i.first!=par)
		{
			dfs2(i.first,x,min(mn,dis[x]));
		}
	}
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;
		adj[i+1].push_back({j,k});
		adj[j].push_back({i+1,k});
	}
	dis[0]=0;
	dfs(0,-1);
	dfs2(0,-1,999999999999999);
	cout<<ans;
}