#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=998244353;
ll power(ll x,ll y)
{
	if(y==0)
	return 1;
	ll ret=power(x,y/2);
	ret*=ret;
	ret%=mod;
	if(y%2==1)
	ret*=x;
	ret%=mod;
	return ret;
}
int main()
{
	ll i,j,m,n,t;
	cin>>n;
	ll ar[n+1];
	ar[0]=1;
	ar[1]=1;
	for(i=2;i<=n;i++)
	{
		ar[i]=ar[i-1]+ar[i-2];
		ar[i]%=mod;
	}
	ll ans=ar[n-1];
	ll x=power(2,n);
	ans*=power(x,mod-2);
	ans%=mod;
	cout<<ans;
}