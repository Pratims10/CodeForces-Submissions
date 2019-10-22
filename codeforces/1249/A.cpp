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
		{
			cin>>ar[i];
		}
		sort(ar,ar+n);
		bool flag=true;
		for(i=1;i<n;i++)
		{
			if(ar[i]-ar[i-1]==1)
			flag=false;
		}
		if(flag)
		cout<<1<<endl;
		else cout<<2<<endl;
	}
}