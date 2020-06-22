#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,s=0;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		s+=ar[i];
	}
	ll x=0,ctr=0;
	for(i=0;i<n-1;i++)
	{
		x+=ar[i];
		if(x==s-x) ctr++;
	}
	cout<<ctr<<endl;
}