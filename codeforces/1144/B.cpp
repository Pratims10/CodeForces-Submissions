#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k;
	cin>>n;
	ll o[n],e[n],odd=0,even=0;
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(k%2==0)
		e[even++]=k;
		else
		o[odd++]=k;
	}
	sort(o,o+odd);
	sort(e,e+even);
	ll ans=0;
	if(odd>even)
	{
		for(i=0;i<odd-even-1;i++)
		ans+=o[i];
	}
	else if(odd==even)
	ans=0;
	else
	{
		for(i=0;i<even-odd-1;i++)
		ans+=e[i];
	}
	if(even==0)
	{
		ans=0;
		for(i=0;i<n-1;i++)
		ans+=o[i];
	}
	if(odd==0)
	{
		ans=0;
		for(i=0;i<n-1;i++)
		ans+=e[i];
	}
	cout<<ans<<endl;
}