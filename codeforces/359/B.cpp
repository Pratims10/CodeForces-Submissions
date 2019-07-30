#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n>>k;
	for(i=1;i<=2*n;i+=2)
	{
		if(k>0)
		{
			cout<<i+1<<' '<<i<<' ';
			k--;
		}
		else
		cout<<i<<' '<<i+1<<' ';
	}
}