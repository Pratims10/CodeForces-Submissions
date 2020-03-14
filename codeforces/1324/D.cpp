#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	vector<ll> v;
	for(i=0;i<n;i++)
	{
		v.push_back(b[i]-a[i]);
	}
	sort(v.begin(),v.end());
	ll ans=0,ctr=0;
	for(i=0;i<n;i++)
	{
		ans+=lower_bound(v.begin(),v.end(),a[i]-b[i])-v.begin();
		if(a[i]>b[i])
		ans--;
	}
	cout<<ans/2;
}