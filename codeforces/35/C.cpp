#include<bits/stdc++.h>
using namespace std;
#define ll int
ll n,m;
list<pair<ll,ll>> src;
void bfs()
{
	list<pair<ll,ll>> q;
	ll dist[n][m];
	ll mp[n][m];
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		mp[i][j]=0;
	}
	for(auto x:src)
	{
		q.push_back(x);
		mp[x.first][x.second]=1;
		dist[x.first][x.second]=0;
	}
	vector<pair<ll,ll>> v;
	v.push_back({0,-1});
	v.push_back({0,1});
	v.push_back({1,0});
	v.push_back({-1,0});
	while(!q.empty())
	{
		auto x=q.front();
		q.pop_front();
		for(ll i=0;i<4;i++)
		{
			ll a=v[i].first+x.first;
			ll b=v[i].second+x.second;
			if(a!=-1 and b!=-1 and a!=n and b!=m and !mp[a][b])
			{
				mp[a][b]=1;
				q.push_back({a,b});
				dist[a][b]=dist[x.first][x.second]+1;
			}
		}
	}
	ll mx=0,a,b;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			if(mx<=dist[i][j])
			{
				mx=dist[i][j];
				a=i;
				b=j;
			}
		}
	}
	cout<<a+1<<' '<<b+1<<endl;
}
int main()
{
	ll i,j,k,t;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n>>m;
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>j>>t;
		src.push_back({j-1,t-1});
	}
	bfs();
}