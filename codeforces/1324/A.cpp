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
		ll o=0,e=0;
		for(i=0;i<n;i++)
		{
			cin>>j;
			if(j%2==0)
			e++;
			else o++;
		}
		if(o and e)
		cout<<"NO\n";
		else cout<<"YES\n";
	}
}