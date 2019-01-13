#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,m,i,j,k;
	cin>>n>>k;
	ll ar[n],s=0;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		s+=ar[i];
	}
	ll snew,s1,max=-1;
	for(i=0;i<k;i++)
	{
		s1=0;
		for(j=i;j<n;j+=k)
		{
			s1+=ar[j];
		}
		//cout<<s1<<' ';
		snew=s-s1;
		if(max<abs(snew))
		max=abs(snew);
	}
	cout<<max<<endl;
}