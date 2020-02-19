//candies
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,l,r,a,b,c,n,m;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=1;i<n;i++)
	ar[i]+=ar[i-1];
	ll q;
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		l--;
		r--;
		if(l==0)
		{
			cout<<ar[r]/10<<endl;
		}
		else
		{
			ll x=ar[r]-ar[l-1];
			cout<<x/10<<endl;
		}
	}
}