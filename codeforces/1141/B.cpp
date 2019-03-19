#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,n,ans,a,b,c,two=0,three=0;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll ctr=0,max=0;
	for(i=0;i<n;i++)
	{
		if(ar[i]==1)
		{
			ctr=0;
			while(ar[i]==1&&i<n)
			{
				ctr++;
				i++;
			}
			i--;
			if(max<ctr)
			max=ctr;
			//cout<<max<<endl;
		}
	}
	ctr=0;
	i=0;
	while(ar[i]==1&&i<n)
	{
		i++;
		ctr++;
	//	cout<<'a';
	}
	i=n-1;
	while(ar[i]==1&&i>=0)
	{
		ctr++;
		i--;
	//	cout<<'b';
	}
//	cout<<max<<' '<<ctr<<endl;
	if(max<ctr)
	max=ctr;
	if(max==2*n)
	max=n;
	cout<<max<<endl;
}