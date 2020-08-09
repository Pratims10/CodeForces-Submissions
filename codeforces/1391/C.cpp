#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
ll power(ll x,ll y)
{
	if(y==0)
	return 1;
	ll ret=power(x,y/2);
	ret%=mod;
	ret*=ret;
	ret%=mod;
	if(y%2==1)
	ret*=x;
	ret%=mod;
	return ret;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll fact[n+1];
	fact[0]=fact[1]=1;
	for(i=2;i<=n;i++)
	{
		fact[i]=(fact[i-1]*i)%mod;
	}
	ll ans=fact[n];
	ans-=power(2,n-1);
	//cout<<power(2,n-1)<<' ';
	if(ans<0)
	ans+=mod;
	else ans%=mod;
	cout<<ans<<endl;
}