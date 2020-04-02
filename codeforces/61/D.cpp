#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
list<pair<ll,ll> > adj[100000];
ll ar[100000];
bool vis[100000];
void dfs(ll x)
{
	vis[x]=true;
	ll mx=0;
	for(auto i:adj[x])
	{
		if(!vis[i.first])
		{
			dfs(i.first);
			mx=max(mx,i.second+ar[i.first]);
		}
	}
	ar[x]=mx;
}
int main()
{
	ll i,j,k,m,t;
	cin>>n;
	ll ans=0;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k>>t;
		j--;k--;
		adj[j].push_back({k,t});
		adj[k].push_back({j,t});
		ans+=2*t;
	}
	memset(vis,false,sizeof(vis));
	dfs(0);
	ans-=ar[0];
	cout<<ans<<endl;
}