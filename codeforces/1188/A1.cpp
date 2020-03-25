#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n;
	cin>>n;
	ll deg[n]={0};
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		deg[j-1]++;
		deg[k-1]++;
	}
	for(i=0;i<n;i++)
//	cout<<deg[i]<<' ';
//	cout<<endl;
	if(deg[i]==2)
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
}