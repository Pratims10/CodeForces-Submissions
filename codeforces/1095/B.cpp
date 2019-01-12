#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,l,n,ans;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	//ll min=ar[0];
	//ll max=ar[n-1];
	cout<<min(ar[n-2]-ar[0],ar[n-1]-ar[1]);
}