#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,t,i,j,k,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n],o=0,e=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]%2==1) o++;
			else e++;
		}
		if(o%2==0 and e%2==0)
		cout<<"YES\n";
		else
		{
			sort(ar,ar+n);
			bool f=false;
			for(i=1;i<n;i++)
			{
				if(ar[i]-ar[i-1]==1)
				f=true;
			}
			if(f) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}