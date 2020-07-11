#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
ll power(ll x,ll y)
{
	if(y==0) return 1;
	ll q=power(x,y/2)%mod;
	if(y%2==0)
	return (q*q)%mod;
	else
	return ((q*q)%mod*x)%mod;
}
int main()
{
	ll l,r,i,j,k,n,m,x;
	cin>>n>>x;
	ll s=0;
	vector<ll> ar(n,0);
	for(i=0;i<n;i++)
	cin>>ar[i],s+=ar[i];
	for(i=0;i<n;i++)
	ar[i]=s-ar[i];
	while(ar.size()>1)
	{
		ll v=ar[ar.size()-1];
		ll ctr=0;
		i=ar.size()-1;
		while(i>=0 and ar[i]==v)
		{
			ctr++;
			i--;
		}
		if(ctr%x==0)
		{
			ll c=ctr/x;
			while(ctr>0)
			{
				ctr--;
				ar.pop_back();
			}
			while(c>0)
			{
				ar.push_back(v+1);
				c--;
			}
		}
		else break;
	}
	ll v=ar.back();
	if(v>s) v=s;
	cout<<power(x,v)%mod;
}