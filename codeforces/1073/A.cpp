#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i;
	cin>>n;
	char s[n+1];
	scanf("%s",s);
	char c=s[0];
	bool flag=true;
	for(i=1;s[i]!='\0';i++)
	{
		if(s[i]!=s[i-1])
		{
			cout<<"YES\n";
			cout<<s[i-1]<<s[i]<<endl;
			flag =false;
			break;
		}
	}
	if(flag)
	cout<<"NO\n";
}