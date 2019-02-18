#include<bits/stdc++.h>
using namespace std;
#define ll long long  int
int main()
{
	ll n,m,k,i,j;
	cin>>n>>m>>k;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n,greater<ll>());
	ll a=ar[0],b=ar[1];
	//cout<<a<<' '<<b<<endl;
	ll ans=(a*k+b)*(m/(k+1))+a*(m%(k+1));
	cout<<ans<<endl;
}