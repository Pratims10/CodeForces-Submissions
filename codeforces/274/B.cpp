#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
list<ll> adj[100001];
ll ans=0;
#define INF 1000000000
ll incr[100001],decr[100001],ar[100001];
void dfs(ll x,ll par)
{
	ll mx=0,mn=0;
	bool f=0;
	for(auto i:adj[x])
	{
		if(i==par) continue;
		dfs(i,x);
		if(incr[i]>0)
		mx=max(mx,incr[i]);
		if(decr[i]>0)
		mn=max(mn,decr[i]);
	}
	incr[x]=mx;
	decr[x]=mn;
	ar[x]+=-1*mx+mn;
	if(ar[x]<0)
	decr[x]+=abs(ar[x]);
	else incr[x]+=abs(ar[x]);
}
int main()
{
	ll i,j,k,m,t;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--,k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	for(i=0;i<n;i++)
	cin>>ar[i];
	dfs(0,-1);
	cout<<incr[0]+decr[0];
}
