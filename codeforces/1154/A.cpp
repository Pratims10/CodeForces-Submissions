#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n;
	ll ar[4];
	for(i=0;i<4;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+4);
	cout<<ar[3]-ar[0]<<' '<<ar[3]-ar[1]<<' '<<ar[3]-ar[2];
}