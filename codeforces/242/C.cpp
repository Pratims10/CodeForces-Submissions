#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<pair<ll,ll>,ll> mp;
map<pair<ll,ll>,ll> allow;
ll x1,yy1,x2,y2;
ll MAX=1e9;
void bfs()
{
	list<pair<ll,ll>> q;
	q.push_back({x1,yy1});
	map<pair<ll,ll>,ll> dis,vis;
	dis[{x1,yy1}]=0;
	vis[{x1,yy1}]=1;
	while(!q.empty())
	{
		auto x=q.front();
		q.pop_front();
		if(x.first==x2 and x.second==y2)
		{
		//	cout<<dis[{6,8}]<<" ";
			cout<<dis[x];
			return;
		}
		vector<pair<ll,ll>> v;
		v.push_back({0,1});
		v.push_back({1,0});
		v.push_back({0,-1});
		v.push_back({-1,0});
		v.push_back({1,-1});
		v.push_back({-1,1});
		v.push_back({1,1});
		v.push_back({-1,-1});
		for(auto y:v)
		{
			ll a=x.first+y.first;
			ll b=x.second+y.second;
			if(vis[{a,b}]!=1 and allow[{a,b}])
			{
				if(a==-1 or b==-1 or a==MAX or b==MAX) continue;
				vis[{a,b}]=1;
				dis[{a,b}]=dis[x]+1;
				q.push_back({a,b});
			}
		}
	}
	cout<<-1;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>x1>>yy1>>x2>>y2;
	cin>>t;
	while(t--)
	{
		cin>>i>>j>>k;
		for(;j<=k;j++)
		allow[{i,j}]=1;
	}
	bfs();
}