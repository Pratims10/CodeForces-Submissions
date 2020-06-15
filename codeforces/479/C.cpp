#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,z,o;
	vector<pair<ll,ll>> v;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		v.push_back({j,k});
	}
	if(n==1)
	{
		cout<<min(v[0].first,v[0].second);
		return 0;
	}
	sort(v.begin(),v.end());
	ll x=1;
	for(i=0;i<n-1;i++)
	{
		if(x==0)
		{
			if(v[i].first<=v[i+1].second) x=1;
		}
		else
		{
			if(v[i].second>v[i+1].second)
			{
				x=0;
			}
		}
	}
	if(x==0) cout<<v[n-1].first;
	else cout<<v[n-1].second;
	
}