#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll ctr=0,ans=9999999;
	for(i=0;i<n;i++)
	{
		ctr=0;
		for(j=0;j<n;j++)
		{
			if(abs(ar[i]-ar[j])%2!=0)
			ctr++;
		}
	//	cout<<ctr<<endl;
		ans=min(ans,ctr);
	}
	cout<<ans<<endl;
}