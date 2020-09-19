#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		ll ar[n];
		ll s=0;
		ll ctr=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]==x)
			ctr++;
			s+=ar[i]-x;
		}
		if(ctr==n)
		cout<<0<<endl;
		else
		{
			if(s==0)
			cout<<1<<endl;
			else
			{
				if(ctr==0)
				cout<<2<<endl;
				else cout<<1<<endl;
			}
		}
	}
}