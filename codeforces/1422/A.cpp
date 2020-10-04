#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>i>>j>>k;
		k=max(i,max(j,k));
		cout<<k+1<<endl;
	}
}