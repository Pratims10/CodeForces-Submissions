#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,x;
	cin>>n>>x>>k;
	vector<ll> v(n);
	for(i=0;i<n;i++)
	cin>>v[i];
	sort(v.begin(),v.end());
	ll ans=0;
	for(i=0;i<n;i++)
	{
		ll y=v[i];
		if(y%x!=0)
		y+=x-(y%x);
		if(k==0)
		{
			if(v[i]%x==0) continue;
			ans+=upper_bound(v.begin(),v.end(),y-1)-lower_bound(v.begin(),v.end(),v[i]);
			continue;
		}
		y+=(k-1)*x;
		//cout<<y<<' ';
		ll l=lower_bound(v.begin(),v.end(),y)-v.begin();
		y+=+x-1;
		ll r=upper_bound(v.begin(),v.end(),y)-v.begin();
		if(l!=n)
		{
			ans+=r-l;
		//	cout<<l<<' '<<r<<'\n';
		}
	}
	cout<<ans;
}
/*
5 3 4
1 13 24 24 24
*/