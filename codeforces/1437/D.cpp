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
		ll ctr=1,lvl=0;
		for(i=1;i<n;)
		{
			ll c=ctr;
			while(ctr--)
			{
				while(i<n-1 and ar[i]<ar[i+1])
				i++,c++;
				i++;
			}
			ctr=c;
			lvl++;
		}
		cout<<lvl<<endl;
	}
}