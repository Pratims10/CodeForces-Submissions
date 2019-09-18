#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,a1,a2,k1,k2,n;
	cin>>n;
	string s;
	cin>>s;
	ll z=0,o=0;
	for(i=0;i<n;i++)
	if(s[i]=='z')
	z++;
	else if(s[i]=='n')
	o++;
	for(i=0;i<o;i++)
	cout<<"1 ";
	for(i=0;i<z;i++)
	cout<<"0 ";
}