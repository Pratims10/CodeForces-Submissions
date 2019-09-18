#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,a1,a2,k1,k2,n;
	cin>>n;
	ll ar[n];
	cin>>j;
	if(j<0)
	ar[0]=-1;
	else ar[0]=1;
	for(i=1;i<n;i++)
	{
		cin>>j;
		if(j<0)
		ar[i]=ar[i-1]*(-1);
		else ar[i]=ar[i-1];
	}
	ll p[n];
	if(ar[n-1]==-1)
	p[n-1]=0;
	else p[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		if(ar[i]==1)
		p[i]=p[i+1]+1;
		else p[i]=p[i+1];
	}
	ll pos=0,neg=0;
	for(i=0;i<n;i++)
	if(ar[i]==1)
	pos+=p[i];
	else
	neg+=p[i]+1;
	if(ar[n-1]==-1)
	p[n-1]=1;
	else p[n-1]=0;
	for(i=n-2;i>=0;i--)
	{
		if(ar[i]==-1)
		p[i]=p[i+1]+1;
		else p[i]=p[i+1];
	}
	for(i=0;i<n;i++)
	if(ar[i]==-1)
	pos+=p[i]-1;
	else
	neg+=p[i];
	cout<<neg<<' '<<pos<<endl;
	
}