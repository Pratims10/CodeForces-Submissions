#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll s=0;
		for(i=0;i<n;i++)
		{
			cin>>j;
			s+=j;
		}
		if(s==m)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}