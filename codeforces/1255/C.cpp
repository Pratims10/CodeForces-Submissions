#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,i,j,k,m,n,a,b,c;
	cin>>n;
	list<ll> adj[n+1];
	ll f[n+1]={0};
	for(i=0;i<=n;i++)
	f[i]=0;
	map<pair<ll,ll>,vector<ll> > mp;
	for(i=0;i<n-2;i++)
	{
		cin>>a>>b>>c;
		adj[a].push_back(b);
		adj[a].push_back(c);
		adj[b].push_back(a);
		adj[b].push_back(c);
		adj[c].push_back(a);
		adj[c].push_back(b);
		mp[{a,b}].push_back(c);
		mp[{b,a}].push_back(c);
		mp[{b,c}].push_back(a);
		mp[{c,b}].push_back(a);
		mp[{c,a}].push_back(b);
		mp[{a,c}].push_back(b);
		f[a]++;
		f[b]++;
		f[c]++;
	}
	bool vis[n+1];
	for(i=0;i<=n;i++)
	vis[i]=false;
	for(i=1;i<=n;i++)
	if(f[i]==1)
	{
		vis[i]=true;
		cout<<i<<' ';
		break;
	}
	ll next,n2=i;
	for(auto x:adj[i])
	{
		if(!vis[x]&&f[x]==2)
		{
			vis[x]=true;
			cout<<x<<' ';
			next=x;
			break;
		}
	}
	while(true)
	{
		ll x=-1;
		for(auto xx:mp[{n2,next}])
		if(!vis[xx])
		{
			x=xx;
			break;
		}
		if(x!=-1)
		{
			cout<<x<<' ';
			vis[x]=true;
			n2=next;
			next=x;
		}
		else break;
	}
/*	for(i=1;i<=n;i++)
	{
		if(f[i]==2&&!vis[i])
		cout<<i<<' ';
	}
	for(i=1;i<=n;i++)
	{
		if(f[i]==1&&!vis[i])
		cout<<i<<' ';
	}
	*/
}