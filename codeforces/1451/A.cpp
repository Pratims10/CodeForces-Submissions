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
		ll ans=0;
		if(n==1)
		ans=0;
		else
		{
			if(n%2==1)
			ans=1,n--;
			if(n>2)
			ans+=2;
			else ans+=1;
		}
		cout<<ans<<endl;
	}
}