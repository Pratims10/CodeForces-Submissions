#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll i,j,k,m,n,t,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		bool flag=false;
		for(i=0;i<n;i++)
		{
			if(ar[i]==k)
			{
				cout<<1<<endl;
				flag=true;
				break;
			}
		}
		if(flag)
		continue;
		sort(ar,ar+n);
		if(ar[n-1]>k)
		cout<<2<<endl;
		else
		{
			ll ctr=k/ar[n-1]+1;
			if(k%ar[n-1]==0)
			ctr--;
			cout<<ctr<<endl;
		}
	}
}