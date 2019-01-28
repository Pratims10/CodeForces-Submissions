#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k,Min,t=9999999999999999;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	Min=99999999999999999;
	ll cost;
	for(i=1;i<=105;i++)
	{
		cost=0;
		for(j=0;j<n;j++)
		{
			if(ar[j]>i+1)
			cost+=ar[j]-i-1;
			else if(ar[j]<i-1)
			cost+=i-1-ar[j];
		}
		if(Min>cost)
		{
			t=i;
			Min=cost;
		}
	}
	cout<<t<<' '<<Min<<endl;
}