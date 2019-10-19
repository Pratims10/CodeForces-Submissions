#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll x[n],y[n],z[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
	}
	vector<pair<ll,pair<ll,ll> > > ar;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			ll d=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
			ar.push_back({d,{i,j}});
		}
	}
	map<ll,ll> mp;
	sort(ar.begin(),ar.end());
	for(i=0;i<ar.size();i++)
	{
		if(mp[ar[i].second.first]==0&&mp[ar[i].second.second]==0)
		{
			mp[ar[i].second.first]=1;
			mp[ar[i].second.second]=1;
			cout<<ar[i].second.first+1<<' '<<ar[i].second.second+1<<endl;
		}
	}
}