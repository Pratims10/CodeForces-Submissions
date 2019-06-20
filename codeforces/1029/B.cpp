#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,c,mx,n,m,i,j,k;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	mx=1;
	for(i=0;i<n-1;i++)
	{
		ll ctr=1;
		while(2*ar[i]>=ar[i+1])
		{
			ctr++;
			i++;
		}
		if(mx<ctr)
		mx=ctr;
	}
	cout<<mx;
}