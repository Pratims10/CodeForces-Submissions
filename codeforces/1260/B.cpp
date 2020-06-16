#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		if(a>b)
		swap(a,b);
		if(a==0&&b!=0)
		cout<<"NO\n";
		else
		{
			if(b<=2*a)
			{
				if((a+b)%3==0)
				cout<<"YES\n";
				else cout<<"NO\n";
			}
			else
			cout<<"NO\n";
		}
	}
}