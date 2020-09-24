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
		ll ctr=0;
		for(i=0;i<n-1;i++)
		{
			if(ar[i]<=ar[i+1])
			ctr=1;
		}
		if(ctr==0)
		cout<<"NO\n";
		else cout<<"YES\n";
	}
}