#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	vector<pair<ll,ll> > v;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		v.push_back({j,k});
	}
	ll r=v[0].first;
	ll ctr=min((ll)2,n);
	for(i=1;i<n-1;i++)
	{
		if(v[i].first-v[i].second>r)
		{
			r=v[i].first;
			ctr++;
		}
		else if(v[i].first+v[i].second<v[i+1].first)
		{
			r=v[i].first+v[i].second;
			ctr++;
		}
		else
		r=v[i].first;
	}
	cout<<ctr<<endl;
}