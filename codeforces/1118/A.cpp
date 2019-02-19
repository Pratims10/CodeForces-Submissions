#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll q,a,n,b,i,j,k;
	cin>>q;
	ll ans;
	while(q--)
	{
		cin>>n>>a>>b;
		if(2*a<=b)
		{
			ans=n*a;
		}
		else
		{
			if(n%2==0)
			ans=(n/2)*b;
			else
			ans=(n/2)*b+a;
		}
		cout<<ans<<endl;
	}
}