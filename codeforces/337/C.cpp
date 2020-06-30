#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+9;
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
int main()
{
	ll i,j,n,m,k;
	cin>>n>>m>>k;
	ll x=n-m;
	long double p=(m*1.0)/(k*1.0-1.0);
	p=ceil(p);
	p-=1;
	if(x>=p)
	cout<<m;
	else
	{
		//cout<<"S";
		ll ans=(x)*(k-1);
		m-=ans;
		ll q=m/k;
		//cout<<q<<' ';
		ll w=exponentiation(2,q)-1;
		if(w<0) w+=mod;
		else w%=mod;
		ans+=((2*w)%mod*k)%mod;
		//cout<<((2*exponentiation(2,q)%mod)%mod*k)%mod<<endl;
		ans+=m%k;
		ans%=mod;
		cout<<ans;
	}
}