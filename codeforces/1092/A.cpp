#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll q,n,k,i,j;
	cin>>q;
	while(q--)
	{
		cin>>n>>k;
		ll ctr=0;
		while(ctr<n)
		{
			cout<<(char)(97+ctr%k);
			ctr++;
		}
		cout<<endl;
	}
}