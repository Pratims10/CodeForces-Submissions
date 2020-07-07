#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>k;
	if(k>=n*(n-1)/2)
	cout<<"no solution";
	else
	{
		for(i=0;i<n;i++)
		cout<<0<<' '<<i<<endl;
	}
}