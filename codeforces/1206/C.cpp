#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	if(n%2==0)
	cout<<"NO\n";
	else
	{
		cout<<"YES\n";
		ll ar[2*n];
		for(i=0;i<2*n;i+=2)
		ar[i]=i+1;
		ll x=2;
		for(i=n;i<2*n;i+=2)
		{
			ar[i]=x;
			x+=2;
		}
		for(i=1;i<n;i+=2)
		{
			ar[i]=x;
			x+=2;
		}
		for(i=0;i<2*n;i++)
		cout<<ar[i]<<' ';
	}
}