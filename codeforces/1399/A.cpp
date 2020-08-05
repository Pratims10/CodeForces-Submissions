#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		sort(ar,ar+n);
		ll f=0;
		for(i=0;i<n-1;i++)
		if(ar[i+1]-ar[i]>1)
		f=1;
		if(f==1)
		cout<<"NO\n";
		else cout<<"YES\n";
	}
}