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
		for(i=0;i<n;i+=2)
		{
			cout<<-1*ar[i+1]<<' '<<ar[i]<<' ';
		}
		cout<<endl;
	}
}