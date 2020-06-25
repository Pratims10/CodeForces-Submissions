#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll par[100001];
list<ll> adj[100001];
ll ar[100001];
vector<ll> ans;
void dfs(ll x,ll p)
{
	for(auto i:adj[x])
	{
		if(i==p) continue;
		par[i]=x;
		dfs(i,x);
	}
}

void dfs2(ll x,ll p)
{
	ll q=ar[x];
	if(p==-1 or par[p]==-1){
		if(ar[x]==1) ans.push_back(x);
	}
	else{
		if(ar[x]!=ar[par[par[x]]])
		{
			//cout<<x<<' '<<par[par[x]]<<endl;
			ans.push_back(x);
		}
	}
	for(auto i:adj[x])
	{
		if(i==p) continue;
		dfs2(i,x);
	}
}

int main()
{
	ll i,j,k,m,n,x,t;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		adj[j-1].push_back(k-1);
		adj[k-1].push_back(j-1);
	}
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<n;i++)
	{
		cin>>j;
		ar[i]^=j;
	}
	par[0]=-1;
	dfs(0,-1);
	dfs2(0,-1);
	cout<<ans.size()<<'\n';
	for(auto x:ans) cout<<x+1<<'\n';
}