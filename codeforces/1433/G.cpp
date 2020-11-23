#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define F first
#define S second
ll n,m,k;
list<pair<ll,ll> > adj[1001];
ll dist[1001][1001];
void dijkstra(ll x)
{
	set<pair<ll,ll>> st;
	for(ll i=0;i<n;i++)
	dist[x][i]=INT_MAX;
	st.insert({0,x});
	dist[x][x]=0;
	while(!st.empty())
	{
		pair<ll,ll> tmp=*(st.begin());
		st.erase(st.begin());
		ll u=tmp.S;
		for(auto i:adj[u])
		{
			ll v=i.F;
			ll wt=i.S;
			if(dist[x][v]>dist[x][u]+wt)
			{
				if(dist[x][v]!=INT_MAX)
				st.erase(st.find({dist[x][v],v}));
				dist[x][v]=dist[x][u]+wt;
				st.insert({dist[x][v],v});
			}
		}
	}
}
int main()
{
	ll i,j,t;
	cin>>n>>m>>k;
	vector<pair<ll,ll>> e;
	for(i=0;i<m;i++)
	{
		ll x,y,w;
		cin>>x>>y>>w;
		x--,y--;
		e.pb({x,y});
		adj[x].pb({y,w});
		adj[y].pb({x,w});
	}
	vector<pair<ll,ll> > q;
	for(i=0;i<k;i++)
	{
		ll k1;
		cin>>j>>k1;
		q.pb({j-1,k1-1});
	}
	for(i=0;i<n;i++)
	{
		dijkstra(i);
	}
	ll ans=INT_MAX;
	for(i=0;i<m;i++)
	{
		ll x=e[i].F;
		ll y=e[i].S;
		ll sum=0;
		for(auto route:q)
		{
			sum+=min(dist[route.F][route.S],min(dist[x][route.F]+dist[route.S][y],dist[y][route.F]+dist[route.S][x]));
		}
		ans=min(ans,sum);
	}
	cout<<ans;
}