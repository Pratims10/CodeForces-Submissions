#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n],s=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			s+=ar[i];
		}
		sort(ar,ar+n);
		ll mx1=ar[n-1];
		ll mx2=ar[n-2];
		ll ans=-1;
		for(i=0;i<n;i++)
		{
			ll x=s-ar[i];
			ll mx;
			if(i==n-1)
			mx=mx2;
			else mx=mx1;
			ll req=(n-1)*mx-x;
			ll x1;
			if(ar[i]>req)
			{
				x1=(ar[i]-req)/(n-1);
				if(((ar[i]-req)%(n-1))!=0)x1++;
				x1=req+x1*(n-1)-ar[i];
			}
			else
			{
				x1=req-ar[i];
			}
			ans=max(ans,x1);
		}
		cout<<ans<<endl;
	}
}