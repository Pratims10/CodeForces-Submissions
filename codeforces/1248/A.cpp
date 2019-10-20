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
		ll a[n];
		ll e1=0,e2=0,o1=0,o2=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
			e1++;
			else o1++;
		}
		cin>>n;
		ll b[n];
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			if(b[i]%2==0)
			e2++;
			else o2++;
		}
//		cout<<' ';
		cout<<o1*o2+e1*e2<<endl;
	}
}