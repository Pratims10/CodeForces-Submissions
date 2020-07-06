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
		{
			cin>>ar[i];
			if(i%2==0) cout<<abs(ar[i])<<' ';
			else cout<<-1*abs(ar[i])<<' ';
		}
		cout<<endl;
	}
}