#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	vector<pair<ll,ll>> v;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		v.push_back({j,k});
	}
	sort(v.begin(),v.end());
	ll mx=v[0].second,ctr=0;
	for(i=1;i<n;i++){
		if(v[i].second<mx) ctr++;
		mx=max(mx,v[i].second);
	}
	cout<<ctr;
}