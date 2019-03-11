#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,n,i,j,k;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	ll ctr=0,max=-1;
	i=0;
	while(ar[i]==ar[0]&&i<n)
	{
		ctr++;
		i++;
	}
	for(;i<n;i++)
	{
		j=i;
		ll ctr2=0;
		//cout<<j<<' '<<endl;
		while(ar[j]==ar[i]&&j<n)
		{
			j++;
			ctr2++;
		}
		//cout<<j<<' '<<ctr<<' '<<ctr2<<endl;
		if(max<min(ctr,ctr2))
		max=min(ctr,ctr2);
		ctr=ctr2;
		i=j-1;
		
	}
	cout<<max*2<<endl;
}