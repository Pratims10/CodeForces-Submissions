#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll mx=0;
		for(i=1;i<=1000;i++)
		{
			ll ctr=0;
			for(j=0;j<n;j++)
			{
				if(ar[j]>=i)
				ctr++;
			}
			if(ctr>=i)	mx=max(mx,min(i,ctr));
		}
		cout<<mx<<endl;
	}
}