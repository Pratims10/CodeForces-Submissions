#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a1,b1,c1;
		ll a2,b2,c2;
		cin>>a1>>b1>>c1>>a2>>b2>>c2;
		ll ans=0;
		ll mn=min(b2,c1);
		c1-=mn;
		b2-=mn;
		ans+=2*mn;
		mn=min(b1,b2);
		b1-=mn;
		b2-=mn;
		if(b1>0)
		{
			mn=min(b1,a2);
			b1-=mn;
			if(b1>0)
			ans-=2*b1;
		}
		cout<<ans<<endl;
	}
}