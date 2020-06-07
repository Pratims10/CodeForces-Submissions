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
		ll ar[n],b[n],a[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			a[i]=ar[i];
		}
		ll o=0,z=0;
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			if(b[i]==1) o++;
			else z++;
		}
		sort(a,a+n);
		bool fl=true;
		for(i=0;i<n;i++)
		{
			if(ar[i]!=a[i]) fl=false;
		}
		if(fl) cout<<"Yes\n";
		else{
			if(z>0 and o>0) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
}