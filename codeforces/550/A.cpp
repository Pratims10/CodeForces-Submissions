#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	string s;
	cin>>s;
	bool f1=false,f2=false;
	for(i=0;i<s.length()-1;i++)
	{
		if(!f1&&s[i]=='A'&&s[i+1]=='B')
		{
			f1=true;
			i++;
		}
		else if(!f2&&s[i]=='B'&&s[i+1]=='A')
		{
			f2=true;
			i++;
		}
	}
	if(f1&&f2)
	cout<<"YES";
	else
	{
		f1=f2=false;
		for(i=s.length()-1;i>=1;i--)
		{
			if(!f1&&s[i]=='B'&&s[i+1]=='A')
			{
				f1=true;
				i--;
			}
			else if(!f2&&s[i]=='A'&&s[i+1]=='B')
			{
				f2=true;
				i--;
			}
		}
		if(f1&&f2)
		cout<<"YES";
		else cout<<"NO";
	}
}