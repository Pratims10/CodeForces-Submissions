#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll p[100001],h[100001],tot[100001];
ll g[100001],b[100001];
list<ll> adj[100001];
bool chk=true;
void dfs(ll x,ll par)
{
	tot[x]=p[x];
	for(auto i:adj[x])
	{
		if(i==par) continue;
		dfs(i,x);
		tot[x]+=tot[i];
	}
}
void dfs2(ll x,ll par)
{
	if((tot[x]+h[x])%2==1) chk=false;
	if((tot[x]+h[x])%2==-1) chk=false;
	g[x]=tot[x]+h[x];
	g[x]/=2;
	b[x]=tot[x]-g[x];
	if(b[x]<0 or g[x]<0) chk=false;
	for(auto i:adj[x])
	{
		if(i==par) continue;
		dfs2(i,x);
	}
}

void dfs3(ll x,ll par)
{
	ll a=0,f=0;
	for(auto i:adj[x])
	{
		if(i==par) continue;
		if(g[x]<g[i]) chk=false;
		a+=g[i];
		f+=b[i];
		dfs3(i,x);
	}
	if(g[x]<a) chk=false;
}

int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		chk=true;
		for(i=0;i<=n;i++)
		adj[i].clear();
		for(i=0;i<n;i++)
		cin>>p[i];
		for(i=0;i<n;i++)
		cin>>h[i];
		for(i=0;i<n-1;i++)
		{
			cin>>j>>k;
			j--,k--;
			adj[j].push_back(k);
			adj[k].push_back(j);
		}
		dfs(0,-1);
		dfs2(0,-1);
		dfs3(0,-1);
		//cout<<g[0]<<' '<<tot[0]<<' ';
		if(chk)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
/*
1
7 4
1 0 1 1 0 1 0
4 0 0 -1 0 -1 0
1 2
1 3
1 4
3 5
3 6
3 7
*/