#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n],s=0;
	map<ll,ll> mp;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		s+=ar[i];
		mp[s]++;
	}
	if(n<3 or s%3!=0){
		cout<<0;
		return 0;
	}
	if(s==0)
	{
		n=mp[0];
		ll ans=(n-2)*(n-1);
		ans/=2;
		cout<<ans;
		return 0;
	}
	ll ans=0;
	s/=3;
	ll sum=0,ctr=0;
	for(i=0;i<n;i++)
	{
		sum+=ar[i];
		if(sum==s) ctr++;
		if(sum==2*s) ans+=ctr;
	}
	
	cout<<ans;
}