#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool sortByX(pair<ll,ll> a,pair<ll,ll> b)
{
	if(a.first==b.first)
	return a.second<b.second;
	return a.first<b.first;
}

bool sortByY(pair<ll,ll> a,pair<ll,ll> b)
{
	if(a.second==b.second)
	return a.first<b.first;
	return a.second<b.second;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,n,t,x,y;
	cin>>n>>m;
	vector<pair<ll,ll>> nodes;
	pair<ll,ll> s,e;
	map<pair<ll,ll>,ll> mp;
	cin>>s.first>>s.second;
	cin>>e.first>>e.second;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		nodes.push_back({x,y});
		mp[{x,y}]=i+1;
	}
	list<pair<ll,ll>> adj[m+2];
	mp[s]=0;
	mp[e]=m+1;
	sort(nodes.begin(),nodes.end(),sortByX);
	for(i=0;i<m-1;i++)
	{
		j=mp[nodes[i]];
		k=mp[nodes[i+1]];
		ll dist=min(abs(nodes[i].first-nodes[i+1].first),abs(nodes[i].second-nodes[i+1].second));
		adj[j].push_back({k,dist});
		adj[k].push_back({j,dist});
	}
	sort(nodes.begin(),nodes.end(),sortByY);
	for(i=0;i<m-1;i++)
	{
		j=mp[nodes[i]];
		k=mp[nodes[i+1]];
		ll dist=min(abs(nodes[i].first-nodes[i+1].first),abs(nodes[i].second-nodes[i+1].second));
		adj[j].push_back({k,dist});
		adj[k].push_back({j,dist});
	}
	for(i=0;i<m;i++)
	{
		ll dist=min(abs(s.first-nodes[i].first),abs(s.second-nodes[i].second));
		j=0;
		k=mp[nodes[i]];
		adj[j].push_back({k,dist});
		adj[k].push_back({j,dist});
		
		j=m+1;
		dist=abs(e.first-nodes[i].first)+abs(e.second-nodes[i].second);
		adj[j].push_back({k,dist});
		adj[k].push_back({j,dist});
	}
	//DIJKSTRA
	set<pair<ll,ll>> st;
	ll dist[m+2];
	for(i=0;i<m+2;i++)
	dist[i]=LLONG_MAX;
	dist[0]=0;
	st.insert({0,0});
	while(!st.empty())
	{
		pair<ll,ll> p=*(st.begin());
		st.erase(st.begin());
		ll node=p.second;
		ll dis=p.first;
		for(auto x:adj[node])
		{
			if(dis+x.second<dist[x.first])
			{
				if(dist[x.first]!=LLONG_MAX)
				st.erase(st.find({dist[x.first],x.first}));
				dist[x.first]=dis+x.second;
				st.insert({dist[x.first],x.first});
			}
		}
	}
	ll ans=abs(s.first-e.first)+abs(s.second-e.second);
	ans=min(ans,dist[m+1]);
	cout<<ans<<'\n';
}