#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	ll b[m];
	for(i=0;i<m;i++)
	cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	cout<<a[n-1]<<' '<<b[m-1]<<endl;
}