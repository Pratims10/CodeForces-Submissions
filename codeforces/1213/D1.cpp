#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>k;
	ll ar[n];
	ll f[200001]={0};
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		f[ar[i]]++;
	}
	ll ans=9999999;
	for(i=0;i<=200000;i++)
	{
		ll reqd=k-f[i],count=0;
		if(reqd<=0)
		{
			cout<<0;
			return 0;
		}
		ll cost[n],size=0;
		for(j=0;j<n;j++)
		{
			ll ctr=0;
			ll x=ar[j];
			while(x>i)
			{
				ctr++;
				x/=2;
			}
			if(x==i && ctr)
			cost[size++]=ctr;
	//		cout<<ctr<<' ';
		}
	//	cout<<endl;
		ll sum=0;
		sort(cost,cost+size);
		for(j=0;j<reqd;j++)
		sum+=cost[j];
		if(ans>sum && reqd<=size)
		ans=sum;
	}
	if(ans!=9999999)
	cout<<ans<<endl;
	else
	{
	//	cout<<' '<<k<<endl;
		ll ans=0,cost[n],size=0;
		for(i=0;i<n;i++)
		{
			ll ctr=0;
			while(ar[i]!=0)
			{
				ctr++;
				ar[i]/=2;
			}
			cost[size++]=ctr;
		}
		sort(cost,cost+size);
		for(i=0;i<k;i++)
		ans+=cost[i];
		cout<<ans<<endl;
	}
}