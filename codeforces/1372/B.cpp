#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ans=n-1;
		ll x=1,y=n-1;
		for(i=2;i*i<=n;i++)
		{
			ll a,b;
			if(n%i==0)
			{
				if(n/i==i) a=i,b=i;
				else
				a=i,b=n/i;
				if(ans>b*(a-1))
				{
					ans=b*(a-1);
					x=b*(a-1);
					y=n-b*(a-1);
				}
				if(ans>a*(b-1))
				{
					ans=a*(b-1);
					x=a*(b-1);
					y=n-a*(b-1);
				}
			}
		}
		cout<<x<<' '<<y<<endl;
	}
}