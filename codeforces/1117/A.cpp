#include<bits/stdc++.h>
using namespace std;
#define ll long long  int
int main()
{
	ll i,j,k,ctr=0,n,max=-1;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		if(max<ar[i])
		{
			max=ar[i];
		}
	}
	ll maxlen=-1;
	for(i=0;i<n;i++)
	{
		ll l=0;
		while(ar[i]==max&&i<n)
		{
			l++;
			i++;
		}
		if(maxlen<l)
		maxlen=l;
	}
	cout<<maxlen<<endl;
}