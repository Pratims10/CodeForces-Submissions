#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,l,r;
	string s;
	cin>>l>>s;
	bool flag=true;
	for(i=0;i<l-1;i++)
	{
		if(s[i]>s[i+1])
		{
			l=i+1;
			r=l+1;
			flag=false;
		}
	}
	if(flag)
	cout<<"NO\n";
	else
	{
		cout<<"YES\n";
		cout<<l<<' '<<r<<endl;
	}
}