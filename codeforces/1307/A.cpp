#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll i,j,k,m,n,t,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		ll ar[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			b[i]=ar[i];
		}
		ll ans=ar[0];
		ll x=1;
		ll ctr=0;
		for(i=1;i<n;i++)
		{
			if(x*ar[i]+ctr<=d)
			{
				ans+=ar[i];
				ctr+=x*ar[i];
			}
			else
			{
				ans+=(d-ctr)/x;
				break;
			}
			x++;
		}
		cout<<ans<<endl;
	}
}