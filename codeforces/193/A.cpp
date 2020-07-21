#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s[50];
ll mp[50][50];
ll m,n;
void dfs(ll x,ll y)
{
	if(x==-1 or y==-1 or x==n or y==m or mp[x][y] or s[x][y]=='.') return;
	mp[x][y]=1;
	dfs(x,y-1);
	dfs(x-1,y);
	dfs(x+1,y);
	dfs(x,y+1);
}
int main()
{
	ll i,j,k,t;
	cin>>n>>m;
	ll ctr=0;
	vector<pair<ll,ll>> v;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		for(j=0;j<m;j++)
		if(s[i][j]=='#')
		{
			ctr++;
			if(v.size()<2) v.push_back({i,j});
		}
	}
	if(ctr<=2)
	{
		cout<<-1;
		return 0;
	}
	ll ans=2;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		if(s[i][j]=='#')
		{
			s[i][j]='.';
			for(ll x=0;x<n;x++)
			{
				for(ll y=0;y<m;y++)
				mp[x][y]=0;
			}
			if(i==v[0].first and j==v[0].second)
			dfs(v[1].first,v[1].second);
			else dfs(v[0].first,v[0].second);
			for(ll x=0;x<n;x++)
			{
				for(ll y=0;y<m;y++)
				if(s[x][y]=='#' and !mp[x][y])
				{
					cout<<1;
					return 0;
				}
			}
			s[i][j]='#';
		}
	}
	cout<<2;
}