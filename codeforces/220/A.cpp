#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll ar[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		b[i]=ar[i];
	}
	sort(b,b+n);
	ll ctr=0;
	for(i=0;i<n;i++)
	{
		if(ar[i]!=b[i]) ctr++;
	}
	if(ctr<=2) cout<<"YES";
	else cout<<"NO";
}