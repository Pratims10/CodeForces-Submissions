#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	string s;
	cin>>s;
	n=s.length();
	bool flag=false;
	for(i=0;i<n;i++)
	if(s[i]=='0'||s[i]=='8')
	{
		cout<<"YES\n"<<s[i];
		return 0;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				string str;
				str+=s[i];
				str+=s[j];
				str+=s[k];
			//	cout<<str<<endl;
				ll x=stoi(str);
				if(x%8==0)
				{
					flag=true;
					cout<<"YES\n"<<str;
					return 0;
				}
			}
			string s1;
			s1+=s[i];
			s1+=s[j];
			ll x1=stoi(s1);
			if(x1%8==0)
			{
				cout<<"YES\n"<<x1;
				return 0;
			}
		}
	}
	if(!flag) cout<<"NO\n";
}