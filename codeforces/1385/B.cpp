#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[2*n];
		map<ll,ll> mp;
		for(i=0;i<2*n;i++)
		{
			cin>>ar[i];
		}
		for(i=0;i<2*n;i++)
		{
			if(!mp[ar[i]])
			{
				mp[ar[i]]=1;
				cout<<ar[i]<<' ';
			}
		}
		cout<<endl;
	}
}