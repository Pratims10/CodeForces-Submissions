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
		ll ar[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		i=n-1;
		while(i>=1 and ar[i]<=ar[i-1]) i--;
		while(i>=1 and ar[i]>=ar[i-1]) i--;
		cout<<i<<endl;
	}
}