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
		ll ar[n];
		ll f[n+1]={0};
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			f[ar[i]]++;
		}
		int ans=0,ctr=0;
		for(i=0;i<=n;i++)
		{
			if(f[i]==0)
			{
				ans+=i;
				break;
			}
			else if(f[i])
			{
				f[i]--;
			}
		}
		for(i=0;i<=n;i++)
		{
			if(f[i]==0)
			{
				ans+=i;
				break;
			}
			else if(f[i])
			{
				f[i]--;
			}
		}
		cout<<ans<<endl;
	}
}