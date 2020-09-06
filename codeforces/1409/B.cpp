#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a,b,x,y,c,d,n1;
		cin>>a>>b>>x>>y>>n;
		c=a;
		d=b;
		n1=n;
		{
			if(a-x<=n)
			{
				n-=a-x;
				a=x;
			}
			else
			{
				a-=n;
				n=0;
			}
			if(n>0)
			{
				if(b-y<=n)
				b=y;
				else b-=n;
			}
		}
		ll ans=a*b;
		a=c;
		b=d;
		n=n1;
		{
			if(b-y<=n)
			{
				n-=b-y;
				b=y;
			}
			else
			{
				b-=n;
				n=0;
			}
			if(n>0)
			{
				if(a-x<=n)
				a=x;
				else a-=n;
			}
		}
		//cout<<ans<<' '<<a*b<<endl;
		ans=min(ans,a*b);
		cout<<ans<<'\n';
	}
}