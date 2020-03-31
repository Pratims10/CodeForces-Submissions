#include<bits/stdc++.h>
using namespace std;
#define ll int
ll bfs(ll n)
{
	ll i,j,k,x;
	list<ll> adj[n];
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	ll mx=0;
	for(x=0;x<n;x++)
	{
		ll dis[n]={0};
		bool vis[n];
		memset(vis,false,sizeof(vis));
		list<ll> q;
		dis[x]=0;
		vis[x]=true;
		q.push_back(x);
		while(!q.empty())
		{
			ll xx=q.front();
			q.pop_front();
			for(auto i:adj[xx])
			{
				if(!vis[i])
				{
					vis[i]=true;
					dis[i]=dis[xx]+1;
					q.push_back(i);
				}
			}
		}
		for(i=0;i<n;i++)
		{
//			cout<<dis[i]<<' ';
			mx=max(mx,dis[i]);
		}
//		cout<<endl;
	}
	return mx;
}
int main()
{
	freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	ll i,j,k,m,n;
	cin>>n;
	ll ans=0;
	for(i=0;i<n;i++)
	{
		cin>>k;
		ans+=bfs(k);
	}
	cout<<ans;
}