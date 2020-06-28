#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a,b;
ll fact[1000001];
ll mod=1e9+7;
bool ckeck(ll x)
{
	while(x>0)
	{
		if(x%10!=a and x%10!=b)
		return false;
		x/=10;
	}
	return true;
}
ll exponentiation(ll base, ll exp)
{
	ll N=mod;
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base % N;
    ll t = exponentiation(base, exp / 2); 
    t = (t * t) % N;
    if (exp % 2 == 0) 
        return t; 
    else
        return ((base % N) * t) % N; 
}
ll C(ll n,ll r)
{
	ll x=(fact[r] * fact[n - r]);
	x%=mod;
	x=exponentiation(x,mod-2);
	return (fact[n] *x)%mod;
}
int main()
{
	ll i,j,n,m,k;
	cin>>a>>b>>n;
	ll s=n*a;
	fact[0]=1;
	for(i=1;i<=n;i++)
	{
		fact[i]=fact[i-1]*i;
		fact[i]%=mod;
	}
	ll ans=0;
	if(ckeck(s))
	{
		ans+=C(n,0);
		ans%=mod;
	}
	for(i=1;i<=n;i++)
	{
		s-=a;
		s+=b;
		//cout<<s<<' ';
		if(ckeck(s))
		{
			ans+=C(n,i);
			ans%=mod;
		}
	}
	cout<<ans;
}