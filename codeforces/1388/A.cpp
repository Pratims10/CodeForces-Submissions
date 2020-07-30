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
		if(n>6+10+14)
		{
			cout<<"YES\n";
			if(n==36)
			{
				cout<<"5 6 10 15";
			}
			else if(n==40)
			{
				cout<<"6 10 22 2";
			}
			else if(n==44)
			{
				cout<<"6 7 10 21";
			}
			else
			cout<<6<<' '<<10<<' '<<14<<' '<<n-(6+10+14);
			cout<<'\n';
		}
		else
		{
			cout<<"NO\n";
		}
	}
}