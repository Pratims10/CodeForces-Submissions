#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll s=0;
		for(i=0;i<n;)
		{
			ll mx=-1*1e9;
			if(ar[i]>0)
			{
				while(i<n and ar[i]>0)
				{
					mx=max(mx,ar[i]);
					i++;
				}
			}
			else
			{
				while(i<n and ar[i]<0)
				{
					mx=max(mx,ar[i]);
					i++;
				}
			}
			s+=mx;
		}
		cout<<s<<'\n';
	}
}