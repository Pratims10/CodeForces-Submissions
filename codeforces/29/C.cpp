#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll i,j,k,t,n,m;
	cin>>n;
	map<ll,ll> f;
	map<ll,vector<ll>> mp;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		f[j]++;
		f[k]++;
		mp[j].push_back(k);
		mp[k].push_back(j);
	}
	ll src=-1,dest;
	for(auto x:f)
	{
		if(x.second==1)
		{
			if(src==-1) src=x.first;
			else
			{
				dest=x.first;
				break;
			}
		}
	}
	cout<<src<<' ';
	ll par=src;
	src=mp[src][0];
	while(src!=dest)
	{
		cout<<src<<' ';
		ll x=src;
		if(mp[src][0]==par)
		{
			src=mp[src][1];
		}
		else
		{
			src=mp[src][0];
		}
		par=x;
	}
	cout<<dest;
}