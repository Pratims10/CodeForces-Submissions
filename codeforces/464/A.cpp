#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,p;
	cin>>n>>p;
	p--;
	string s;
	cin>>s;
	bool flag=false;
	for(i=n-1;i>=0;i--)
	{
		char a,b,c;
		a=b=c=s[i];
		if(i-1>=0) b=s[i-1];
		if(i-2>=0) c=s[i-2];
		for(char j=s[i]+1;j<='a'+p;j++)
		{
			if(j!=b and j!=c)
			{
				flag=true;
				s[i]=j;
				break;
			}
		}
		if(flag) break;
	}
	if(!flag) cout<<"NO";
	else
	{
		string s1=s;
		i++;
		for(;i<n;i++)
		{
			//cout<<endl;
			//cout<<s<<endl;
			char a,b,c;
			a=b=c=s[i];
			if(i-1>=0) b=s[i-1];
			if(i-2>=0) c=s[i-2];
			//cout<<i-1<<' '<<b<<endl;
			//cout<<i-2<<' '<<c<<endl;
			bool fl=false;
			for(char j='a';j<='a'+p;j++)
			{
				if(j!=b and j!=c)
				{
					s[i]=j;
					fl=true;
					break;
				}
			}
			if(!fl)
			{
			//	cout<<b<<' '<<c<<endl;
				if(i-1>=0)
				s[i-1]=s1[i-1];
				if(i-2>=0)
				s[i-2]=s1[i-2];
				cout<<s;
				return 0;
			}
		}
		cout<<s;
	}
}