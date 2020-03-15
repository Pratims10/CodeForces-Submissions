#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
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
	i=0,j=0;
	ll ctr=0;
	while(i<n and j<m)
	{
		if(abs(a[i]-b[j])<=1)
		{
			i++;
			j++;
			ctr++;
		}
		else if(a[i]<b[j])
		i++;
		else j++;
	}
	cout<<ctr;
}