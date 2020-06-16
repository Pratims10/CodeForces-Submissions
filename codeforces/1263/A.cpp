#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		ll ar[3];
		cin>>ar[0]>>ar[1]>>ar[2];
		sort(ar,ar+3);
		a=ar[2];
		b=ar[1];
		c=ar[0];
		ll ans=0;
		if(a>=b+c)
		{
			ans=b+c;
			a-=b+c;
			b=0;c=0;
		}
		else
		{
			if(c>(a-b))
			{
			    ll x=a-b;
				c-=x;
				ans+=x;
				a-=x;
				if(c%2==1)
				{
					a-=c/2+1;
					b-=c/2;
					ans+=c;
					c=0;
				}
				else
				{
					a-=c/2;
					b-=c/2;
					ans+=c;
					c=0;
				}
			}
			else
			{
				ans=c;
				a-=c;
				c=0;
			}
			ans+=min(a,b);
		}
		cout<<ans<<endl;
	}
}