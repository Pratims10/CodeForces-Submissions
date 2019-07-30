#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,pos,x,y;
	cin>>n>>x>>y;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<n;i++)
	{
		bool flag=true;
		for(j=i-x;j<=i+y;j++)
		{
			if(j<0||j>=n)
			continue;
			if(i==j)
			continue;
			if(ar[i]>=ar[j])
			flag=false;
		}
		if(flag)
		{
			cout<<i+1;
			break;
		}
	}
}