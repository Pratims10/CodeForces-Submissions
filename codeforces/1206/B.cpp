#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll z=0,neg=0;
	ll ans=0;
	for(i=0;i<n;i++)
	{
		if(ar[i]==0)
		z++;
		else if(ar[i]>0)
		ans+=ar[i]-1;
		else
		{
			ans+=abs(ar[i])-1;
			neg++;
		}
	}
	if(neg%2==0)
	cout<<ans+z<<endl;
	else
	{
		if(z!=0)
		cout<<ans+1+z-1<<endl;
		else
		cout<<ans+2<<endl;
	}
}