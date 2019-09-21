#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll l,i,j,k,m,n,t;
	cin>>l;
	string s;
	cin>>s;
	ll ctr=0;
	for(i=0;i<l;i+=2)
	{
		if(s[i]=='a'&&s[i+1]=='a')
		{
			s[i+1]='b';
			ctr++;
		}
		else if(s[i]=='b'&&s[i+1]=='b')
		{
			s[i+1]='a';
			ctr++;
		}
	}
	cout<<ctr<<endl<<s<<endl;
}