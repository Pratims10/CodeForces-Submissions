#include<bits/stdc++.h>
using namespace std;
#define ll long long int

list<ll> adj[100001];
ll ar[100001];
vector<ll> dp[100001][20];
ll p[100001][20];
ll lvl[100001];
vector<ll> vals[100001];
ll n,m;

vector<ll> merge(const vector<ll> &a,const vector<ll> &b)
{
	vector<ll> v;
	ll i=0,j=0;
	while(i<a.size() and j<b.size())
	{
		if(a[i]<b[j])
		v.push_back(a[i]),i++;
		else
		v.push_back(b[j]),j++;
		if(v.size()==10)
		return v;
	}
	while(i<a.size())
	{
		v.push_back(a[i]),i++;
		if(v.size()==10)
		return v;
	}
	while(j<b.size())
	{
		v.push_back(b[j]),j++;
		if(v.size()==10)
		return v;
	}
	return v;
}
ll lca(ll x,ll y)
{
	if(lvl[x]<lvl[y])
	swap(x,y);
	for(ll i=20;i>=0;i--)
	{
		if(lvl[x]-(1ll<<i)>=lvl[y])
		x=p[x][i];
	}
	if(x==y)
	return x;
	for(ll i=19;i>=0;i--)
	{
		if(p[x][i]!=p[y][i])
		x=p[x][i],y=p[y][i];
	}
	return p[x][0];
}

vector<ll> path(ll x,ll len)
{
	vector<ll> v;
	for(ll i=20;i>=0;i--)
	{
		if(len>=(1ll<<i))
		{
			v=merge(v,dp[x][i]);
			len-=(1ll<<i);
			x=p[x][i];
		}
	}
	return v;
}

void dfs(ll x,ll par)
{
	dp[x][0]=vals[par];
	p[x][0]=par;
	for(auto child:adj[x])
	{
		if(child==par) continue;
		lvl[child]=lvl[x]+1;
		dfs(child,x);
	}
}
void print(vector<ll> &v,ll len)
{
	ll sz=v.size();
	sz=min(sz,len);
	cout<<sz<<' ';
	for(ll i=0;i<sz;i++)
	cout<<v[i]+1<<' ';
	cout<<endl;
}
int main()
{
	ll i,j,k,t,q;
	cin>>n>>m>>q;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--,k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	for(i=0;i<m;i++)
	{
		cin>>ar[i];
		ar[i]--;
		vals[ar[i]].push_back(i);
	}
	
	lvl[0]=0;
	dfs(0,0);
	
	for(i=1;i<20;i++)
	{
		for(j=0;j<n;j++)
		{
			p[j][i]=p[p[j][i-1]][i-1];
		}
	}
	for(i=1;i<20;i++)
	{
		for(j=0;j<n;j++)
		{
			dp[j][i]=merge(dp[j][i-1],dp[p[j][i-1]][i-1]);
		}
	}
	while(q--)
	{
		ll len;
		cin>>j>>k>>len;
		j--,k--;
		if(lvl[j]<lvl[k])
			swap(j,k);
		if(j==k)
		{
			print(vals[j],len);
			continue;
		}
		ll x=lca(j,k);
		ll dist=lvl[j]-lvl[x];
		vector<ll> v=path(j,dist);
		if(x==k)
		{
			v=merge(v,vals[j]);
			print(v,len);
			continue;
		}
		v=merge(v,path(k,lvl[k]-lvl[x]-1));
		v=merge(v,vals[j]);
		v=merge(v,vals[k]);
		print(v,len);
	}
}
/*
5 5 1
2 5
3 2
2 1
4 2
1 3 5 1 1
5 4 3
*/