#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	map<ll,ll> mp;
	for(i=0;i<ceil((n*1.0)/2.0);i++)
	{
		if(ar[i]-i>0)
		mp[ar[i]-i]++;
	}
	for(i=ceil((n*1.0)/2.0);i<n;i++)
	{
		if(ar[i]-(n-1-i)>0)
		mp[ar[i]-(n-1-i)]++;
	}
	ll mx=0;
	for(auto x:mp)
	mx=max(mx,x.second);
	cout<<n-mx;
}