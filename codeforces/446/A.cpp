#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n],a[n],b[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	a[0]=1;
	for(i=1;i<n;i++)
	{
		if(ar[i]>ar[i-1])
		a[i]=a[i-1]+1;
		else a[i]=1;
	}
	b[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		if(ar[i]<ar[i+1])
		b[i]=b[i+1]+1;
		else b[i]=1;
	}
//	for(i=0;i<n;i++)
//	cout<<a[i]<<' ';
//	cout<<endl;
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	ll ans=0;
	for(i=0;i<n;i++)
	{
		ans=max(ans,a[i]+b[i]-1);
		if(i==0)
		{
			ans=max(ans,b[i+1]+1);
		}
		else if(i==n-1)
		{
			ans=max(ans,a[i-1]+1);
		}
		else
		{
			ll x=a[i-1]+b[i+1];
//			cout<<x<<' ';
			if(ar[i+1]-ar[i-1]>=2)
			ans=max(ans,x+1);
			else
			{
				ans=max(ans,a[i-1]+1);
				ans=max(ans,b[i+1]+1);
			}
		}
	}
//	cout<<endl;
	cout<<ans;
}