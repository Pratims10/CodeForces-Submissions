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
		{
			ll ans;
			n=(n/k);
			ll ar[10];
			ll x=k;
			for(i=0;i<10;i++)
			{
				ar[i]=x%10;
				x+=k;
			}
			ll sum=0;
			for(i=0;i<10;i++)
			sum+=ar[i];
			ans=sum*(n/10);
			n%=10;
			for(i=0;i<n;i++)
			ans+=ar[i];
			cout<<ans<<endl;
		}
	}
}