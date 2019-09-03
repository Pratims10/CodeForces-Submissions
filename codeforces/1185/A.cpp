#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c,d;
	ll ar[3];
	cin>>ar[0]>>ar[1]>>ar[2]>>d;
	sort(ar,ar+3);
	ll ans=0;
	if(ar[1]-ar[0]<d)
	{
		ans+=d-ar[1]+ar[0];
	}
	if(ar[2]-ar[1]<d)
	{
		ans+=d-ar[2]+ar[1];
	}
	cout<<ans<<endl;
}