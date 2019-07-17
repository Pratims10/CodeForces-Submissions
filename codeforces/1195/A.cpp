#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,n,k;
	cin>>n>>k;
	ll f[k+1]={0},ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		f[ar[i]]++;
	}
	ll o=0;
	for(i=1;i<=k;i++)
	{
		if(f[i]%2==1)
		o++;
	}
	cout<<n-o/2;
}