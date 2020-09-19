#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n);
	ll b[n];
	j=0;
	for(i=1;i<n;i+=2)
	{
		b[i]=ar[j++];
	}
	for(i=0;i<n;i+=2)
	b[i]=ar[j++];
	ll ctr=0;
	for(i=1;i<n-1;i++)
	{
		if(b[i]<b[i-1] and b[i]<b[i+1])
		ctr++;
	}
	cout<<ctr<<endl;
	for(i=0;i<n;i++)
	cout<<b[i]<<' ';
}