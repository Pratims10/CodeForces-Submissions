#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		string s,s1;
		cin>>s;
		s1+=s[0];
		for(i=1;i<s.length();i+=2)
		s1+=s[i];
		cout<<s1<<endl;
	}
}