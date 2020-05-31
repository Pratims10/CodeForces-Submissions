#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n];
		ll o=0,e=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]%2) o++;
			else e++;
		}
		bool flag=false;
		for(i=1;i<=k;i+=2)
		{
			if(i<=o and k-i<=e) flag=true;
		}
		if(flag) cout<<"Yes\n";
		else cout<<"No\n";
	}
}