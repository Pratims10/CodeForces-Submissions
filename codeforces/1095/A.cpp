#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,l;
	string s;
	cin>>l;
	cin>>s;
	ll ctr=0;
	for(i=0;i<l;i+=ctr)
	{
		cout<<s[i];
		ctr++;
	}
}