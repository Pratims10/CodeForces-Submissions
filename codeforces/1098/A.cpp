#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[100001];
bool vis[100001];
ll a[100001],s[100001],n;
ll deg[100001]={0};
void dfs(ll x,ll p[])
{
	vis[x]=true;
	list<ll> q;
	q.push_back(x);
	while(!q.empty())
	{
		x=q.front();
		q.pop_front();
		for(auto i:adj[x])
		{
			if(!vis[i])
			{
				if(s[x]==-1)
				{
					a[x]=min(a[x],s[i]-s[p[x]]);
				}
				else
				{
					if(x==0)
					a[x]=s[x];
					else a[x]=s[x]-s[p[x]];
				}
				q.push_back(i);
				vis[i]=true;
			}
		}
		if(s[x]==-1)
		{
			if(deg[x]>1)
			s[x]=s[p[x]]+a[x];
			else a[x]=0;
		}
		if(a[x]==9999999999)
		{
			a[x]=s[x]-s[p[x]];
	//		cout<<"D";
	//		cout<<x<<' '<<s[x]<<' '<<p[x]<<' '<<s[p[x]]<<"D";
		}
	}
}
int main()
{
	ll i,j,k;
	cin>>n;
	ll par[n];
	for(i=1;i<n;i++)
	{
		cin>>j;
		j--;
		par[i]=j;
		adj[i].push_back(j);
		adj[j].push_back(i);
		a[i]=9999999999;
		deg[j]++;
		deg[i]++;
		//p[i]=j;
//		cout<<i<<' '<<' '<<par[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		vis[i]=false;
	}
	for(i=0;i<n;i++)
	cin>>s[i];
	dfs(0,par);
	ll ans=0;
	for(i=0;i<n;i++)
	{
		ans+=a[i];
		if(a[i]<0)
		{
			cout<<-1;
			return 0;
		}
//		cout<<s[i]<<' ';
	}
//	cout<<endl;
	cout<<ans;
}