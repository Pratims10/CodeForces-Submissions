#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> adj[100001];
vector<ll> adj1[100001],adj2[100001];
ll dp[100001][21];
ll n;
ll lvl[100001];
ll start[100001],finish[100001];
map<pair<ll,ll>,ll> mp;
ll sub[100001];
ll t=0;

void dfs(ll x,ll par)
{
	dp[x][0]=par;
	start[x]=t++;
	adj1[lvl[x]].push_back(start[x]);
	for(auto i:adj[x])
	{
		if(i==par) continue;
		lvl[i]=lvl[x]+1;
		dfs(i,x);
	}
	finish[x]=t++;
	adj2[lvl[x]].push_back(finish[x]);
}

ll parent(ll x,ll y)
{
	for(ll i=20;i>=0;i--)
	{
		if(y>=(1ll<<i))
		x=dp[x][i],y-=(1ll<<i);
	}
	return x;
}

int main()
{
	ll i,j,k,m;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		if(ar[i]==0) continue;
		adj[i].push_back(ar[i]-1);
		adj[ar[i]-1].push_back(i);
	}
	for(i=0;i<n;i++)
	if(ar[i]==0)
	{
		lvl[i]=0;
		dfs(i,i);
	}
	for(j=1;j<=20;j++)
	{
		for(i=0;i<n;i++)
		{
			dp[i][j]=dp[dp[i][j-1]][j-1];
		}
	}
	
	ll test;
	cin>>test;
	while(test--)
	{
		ll v,p;
		cin>>v>>p;
		v--;
		if(lvl[v]<p)
		cout<<"0 ";
		else
		{
			ll x=parent(v,p);
			ll dist=lvl[v];
			ll l=lower_bound(adj1[dist].begin(),adj1[dist].end(),start[x])-adj1[dist].begin();
			ll r=lower_bound(adj1[dist].begin(),adj1[dist].end(),finish[x])-adj1[dist].begin();
			cout<<r-l-1<<' ';
		}
	}
}