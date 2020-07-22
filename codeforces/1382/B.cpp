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
		i=0;
		ll ctr=0;
		while(i<n-1 and ar[i]==1)
		{
			ctr++;
			i++;
		}
		if(ctr%2)
			cout<<"Second\n";
		else
			cout<<"First\n";
	}
}