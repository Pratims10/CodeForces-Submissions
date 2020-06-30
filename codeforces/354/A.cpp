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
	ll i,j,n,m,k,l,r,ql,qr;
	cin>>n>>l>>r>>ql>>qr;
	ll w[n];
	for(i=0;i<n;i++)
	cin>>w[i];
	ll p[n],s[n];
	p[0]=w[0];
	s[n-1]=w[n-1];
	for(i=1;i<=n;i++)
	{
		p[i]=p[i-1]+w[i];
	}
	for(i=n-2;i>=0;i--)
	s[i]=s[i+1]+w[i];
	ll ans=LLONG_MAX;
	for(i=0;i<n-1;i++)
	{
		ll x=l*p[i]+r*s[i+1];
		ll diff=(i+1)-(n-i-1);
		if(diff>0) diff--;
		else if(diff<0) diff++;
		if(diff>0) x+=ql*diff;
		else x+=-1*qr*diff;
		ans=min(x,ans);
	}
	//cout<<ans<<' ';
	ll x=r*s[0];
	ll diff=n-1;
	x+=qr*diff;
	ans=min(x,ans);
	
	x=l*p[n-1];
	diff=n-1;
	x+=ql*diff;
	ans=min(x,ans);
	
	cout<<ans;
}