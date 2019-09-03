#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll i,j,k,m,n,t,b,c,d;
	cin>>n>>m;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll f[n][101]={0};
	f[0][ar[0]]++;
	for(i=1;i<n;i++)
	{
		for(j=0;j<=100;j++)
		f[i][j]=f[i-1][j];
		f[i][ar[i]]++;
	}
	cout<<"0 ";
	ll sum=ar[0];
	for(i=1;i<n;i++)
	{
		sum+=ar[i];
		if(sum>m)
		{
			ll diff=sum-m;
			ll M=m;
			ll ans=0;
			for(j=100;j>=0;j--)
			{
				if(f[i-1][j]>0)
				{
					ll x=f[i-1][j];
					if(x*j<=diff)
					{
						ans+=x;
						diff-=x*j;
					}
					else
					{
						ans+=ceil((diff*1.0)/(j*1.0));
						break;
					}
				}
//				cout<<M<<' ';
			}
//			cout<<endl;
			cout<<ans<<' ';
		}
		else
		cout<<"0 ";
	}
}