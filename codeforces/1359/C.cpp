#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ld func(ll x,ll a,ll b)
{
	ld p=x*a+(x-1)*b;
	ld q=2.0*x-1.0;
	p/=q;
	return p;
}
int main()
{
	ll i,j,k,test,m,n;
	cin>>test;
	while(test--)
	{
		ll a,b;
		ld t;
		ld diff=1e9;
		diff*=1.0;
		cin>>a>>b>>t;
		ll l=1,r=1e6;
		ll ans=-1;
		while(l<=r)
		{
			ll mid=(l+r)/2;
			ld x=func(mid,a,b);
			ld y=func(mid+1,a,b);
			if(abs(x-t)<diff)
			{
				diff=abs(x-t);
				ans=2*mid-1;
			}
			else if(abs(x-t)==diff)
			ans=min(ans,2*mid-1);
			else if(abs(y-t)<diff)
			{
				diff=abs(y-t);
				ans=2*mid+1;
			}
			else if(abs(y-t)==diff)
			ans=min(ans,2*mid+1);
			if(x<t and y<t)
			r=mid-1;
			else
			l=mid+1;
		}
		ld mid=(a+b);
		mid/=2.0;
		if(diff>abs(mid-t))
		{
			ans=2;
		}
		if(t>=a)
		ans=1;
		cout<<ans<<'\n';
	}
}