#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		ll l=0,r=n-1;
		string s1,s2,s3;
		while(l<n and s[l]=='0') s1+=s[l],l++;
		while(r>=0 and s[r]=='1') s2+=s[r],r--;
		if(l<r) s1+='0';
		cout<<s1+s2<<endl;
	}
}