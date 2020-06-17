#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	string s,s1;
	cin>>s;
	n=s.length();
	for(i=0;i<n;)
	{
		j=i;
		ll ctr=0;
		while(j<n and s[i]==s[j]) {
			j++;
			ctr++;
		}
		if(ctr>=2)
		{
			s1+=s[i];
			s1+=s[i];
		}
		else s1+=s[i];
		i=j;
		//cout<<s1<<endl;
	}
	s=s1;
	n=s.length();
	for(i=0;i<n-3;i++)
	{
		if(s[i]==s[i+1] and s[i+2]==s[i+3])
		s[i+3]='N';
	}
	for(auto x:s) if(x!='N') cout<<x;
}