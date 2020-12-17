#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			char ch='a';
			ch+=i%3;
			cout<<ch;
		}
		cout<<'\n';
	}
}