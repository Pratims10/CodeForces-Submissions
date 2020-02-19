//k price
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,p,t,a,b,c,r;
	cin>>t;
	while(t--)
	{
		cin>>n>>p>>k;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		sort(ar,ar+n);
		if(p<ar[0])
		{
			cout<<0<<endl;
			continue;
		}
		ll ctr=0;
		c=p;
		ctr=1;
		c=p-ar[0];
		i=2;
		while(i<n&&c>0)
		{
			if(ar[i]<=c)
			{
				c-=ar[i];
				i+=2;
				ctr+=2;
			}
			else
			{
				if(ar[i-1]<=c)
					ctr++;
				break;
			}
		}
		ll ans=ctr;
		ctr=0;
		c=p;
		i=1;
		while(i<n&&c>0)
		{
			if(ar[i]<=c)
			{
				c-=ar[i];
				i+=2;
				ctr+=2;
			}
			else
			{
				if(ar[i-1]<=c)
				ctr++;
				break;
			}
		}
		ans=max(ans,ctr);
		cout<<ans<<endl;
	}
}