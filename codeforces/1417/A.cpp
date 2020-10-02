#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n];
		ll mn=INT_MAX,mnpos;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(mn>ar[i])
			{
				mn=ar[i];
				mnpos=i;
			}
		}
		ll ans=0;
		for(i=0;i<n;i++)
		{
			if(mnpos!=i)
			{
				ll x=k-ar[i];
				ans+=x/mn;
			}
		}
		cout<<ans<<endl;
	}
}