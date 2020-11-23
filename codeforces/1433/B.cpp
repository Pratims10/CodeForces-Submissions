#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll l=0,r=n-1;
		while(l<n and ar[l]==0)
		l++;
		while(r>=0 and ar[r]==0)
		r--;
		ll ctr=0;
		for(i=l;i<=r;i++)
		if(ar[i]==0)
		ctr++;
		cout<<ctr<<'\n';
	}
}