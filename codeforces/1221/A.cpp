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
		cin>>ar[i];
		sort(ar,ar+n);
		ll x=0;
		for(i=0;i<n;i++)
		{
			x+=ar[i];
			if(x>=2048)
			break;
		}
		bool flag=true;
		for(i=0;i<n;i++)
		{
			if(x==2048)
			break;
			else x-=ar[i];
		}
		if(x==2048)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}