#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,q;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll ans=ar[n-1];
		ll d=0;
		for(i=0;i<n-1;i++)
		{
			if(ar[i]<ar[i+1])
			{
				
			}
			else
			{
				d+=ar[i]-ar[i+1];
			}
		}
		d+=ans;
		cout<<d<<endl;
	}
}