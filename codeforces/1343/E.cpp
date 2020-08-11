#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m,a,b,c;
list<ll> adj[200001];
void bfs(ll dist[],ll x)
{
	list<ll> q;
	dist[x]=0;
	q.push_back(x);
	bool vis[n]={0};
	vis[x]=true;
	while(!q.empty())
	{
		x=q.front();
		q.pop_front();
		for(auto i:adj[x])
		{
			if(!vis[i])
			{
				vis[i]=true;
				dist[i]=dist[x]+1;
				q.push_back(i);
			}
		}
	}
}
int main()
{
	ll i,j,k,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>a>>b>>c;
		a--,b--,c--;
		for(i=0;i<n;i++)
		adj[i].clear();
		ll p[m];
		for(i=0;i<m;i++)
		cin>>p[i];
		for(i=0;i<m;i++)
		{
			cin>>j>>k;
			j--,k--;
			adj[j].push_back(k);
			adj[k].push_back(j);
		}
		ll da[n],db[n],dc[n];
		bfs(da,a);
		bfs(db,b);
		bfs(dc,c);
		ll ans=LLONG_MAX;
		ll pre[m];
		sort(p,p+m);
		pre[0]=p[0];
		for(i=1;i<m;i++)
		pre[i]=pre[i-1]+p[i];
		
		for(i=0;i<n;i++)
		{
			if(da[i]+db[i]+dc[i]-1>=m)
			continue;
			ll x=0;
			if(db[i]>0)
			x+=pre[db[i]-1];
			if(da[i]+db[i]+dc[i]>0)
			x+=pre[da[i]+db[i]+dc[i]-1];
			ans=min(ans,x);
		}
		cout<<ans<<endl;
	}
}