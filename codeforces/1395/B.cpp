#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,x,y;
	cin>>n>>m>>x>>y;
	x--,y--;
	vector<pair<ll,ll>> v;
	for(i=y;i<m;i++)
	{
		v.push_back({x,i});
	}
	for(i=y-1;i>=0;i--)
	v.push_back({x,i});
	j=-1;
	for(i=0;i<x;i++)
	{
		if(j==-1)
		{
			for(j=0;j<m;j++)
			v.push_back({i,j});
		}
		else
		{
			for(j=m-1;j>=0;j--)
			v.push_back({i,j});
		}
	}
	for(i=x+1;i<n;i++)
	{
		if(j==-1)
		{
			for(j=0;j<m;j++)
			v.push_back({i,j});
		}
		else
		{
			for(j=m-1;j>=0;j--)
			v.push_back({i,j});
		}
	}
	for(auto x:v)
	cout<<x.first+1<<' '<<x.second+1<<endl;
}