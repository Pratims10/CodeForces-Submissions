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
		ll o=0,z=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]==1)
			{
				o++;
			}
			else z++;
		}
		if(o==z)
		{
			cout<<z<<endl;
			for(i=0;i<z;i++)
			cout<<0<<' ';
			cout<<endl;
		}
		else if(z<o)
		{
			if(o%2==1)
			o--;
			cout<<o<<endl;
			for(i=0;i<o;i++)
			cout<<1<<' ';
			cout<<endl;
		}
		else
		{
			cout<<z<<endl;
			for(i=0;i<z;i++)
			cout<<0<<' ';
			cout<<endl;
		}
	}
}