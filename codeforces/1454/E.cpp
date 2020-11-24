#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[200001];
ll ans=0;
bool vis[200001];
ll par[200001];
ll cy=-1,cy2=-1;
map<ll,ll> mp;
void dfs(ll x)
{
	vis[x]=true;
	for(auto i:adj[x])
	{
		if(i==par[x]) continue;
		if(vis[i])
		{
			if(cy==-1)
			cy=x,cy2=i;
			continue;
		}
		par[i]=x;
		dfs(i);
	}
}
ll dfs2(ll x,ll p)
{
	ll ret=1;
	for(auto i:adj[x])
	{
		if(i!=p and mp.find(i)==mp.end())
		ret+=dfs2(i,x);
	}
	return ret;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		adj[i].clear();
		cy=-1;
		mp.clear();
		ans = n*(n-1)/2;
		for(i=0;i<n;i++)
		{
			vis[i]=false;
		}
		for(i=0;i<n;i++)
		{
			cin>>j>>k;
			j--,k--;
			adj[j].push_back(k);
			adj[k].push_back(j);
		}
		dfs(0);
		mp[cy]=1;
		
		while(cy!=cy2)
		{
			cy=par[cy];
			mp[cy]=1;
		}
		vector<ll> v;
		for(auto x:mp)
		{
			v.push_back(dfs2(x.first,-1));
		}
		ll aa=0;
		for(auto x:v)
		{
			aa+=x*(n-x);
		}
		aa/=2;
		ans+=aa;
		cout<<ans<<'\n';
	}
}