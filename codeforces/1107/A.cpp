#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll q,i,j,k,n;
	cin>>q;
	while(q--)
	{
		cin>>n;
		string s;
		cin>>s;
		if(s.length()==2)
		{
			if(s[0]<s[1])
			cout<<"YES\n2\n"<<s[0]<<' '<<s[1]<<' '<<endl;
			else
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n2\n";
			cout<<s[0]<<' ';
			for(i=1;i<n;i++)
			cout<<s[i];
			cout<<endl;
		}
	}
}