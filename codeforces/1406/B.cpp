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
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar,ar+n);
		ll ans=LLONG_MIN;
		for(i=0;i<=5;i++)
		{
			ll p=1;
			for(j=0;j<5-i;j++)
			p*=ar[j];
			for(j=n-1;j>=n-i;j--)
			p*=ar[j];
			ans=max(ans,p);
		}
		cout<<ans<<endl;
	}
}