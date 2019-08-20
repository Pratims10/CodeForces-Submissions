#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,a,b,c,l,r;
	cin>>n>>l>>r;
	ll ar[n];
	ll ctr=1;
	for(i=0;i<n;i++)
	{
		if(l!=0)
		{
			ar[i]=ctr;
			ctr*=2;
			l--;
		}
		else
		ar[i]=1;
	}
	ll s=0;
	for(i=0;i<n;i++)
	s+=ar[i];
	cout<<s<<' ';
	//big
	ctr=1;
	for(i=0;i<n;i++)
	{
		if(r!=0)
		{
			ar[i]=ctr;
			ctr*=2;
			r--;
		}
		else
		ar[i]=ctr/2;
	}
	s=0;
	for(i=0;i<n;i++)
	s+=ar[i];
	cout<<s<<' ';
}