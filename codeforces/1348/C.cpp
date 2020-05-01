#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		string s,str[k];
		cin>>s;
		ll f[26]={0};
		for(i=0;i<n;i++)
		f[s[i]-'a']++;
		char ch;
		for(i=25;i>=0;i--)
		if(f[i])
		{
			ch='a'+i;
			break;
		}
		ll ctr=0;
		sort(s.begin(),s.end());
		for(i=0;i<k;i++)
		{
			str[i]+=s[i];
		}
		for(;i<n;i++)
		{
			if(s[i]==ch)
			break;
			str[0]+=s[i];
		}
		ll fl=0;
		for(j=0;j<k-1;j++)
		{
			if(str[j]!=str[j+1])
			{
				fl=1;
				break;
			}
		}
		if(fl)
		{
			for(;i<n;i++)
			str[0]+=s[i];
		}
		else
		{
			ctr=0;
			for(;i<n;i++)
			{
				if(ctr==k)
				ctr=0;
				str[ctr]+=s[i];
				ctr++;
			}
		}
		sort(str,str+k);
		cout<<str[k-1]<<endl;
	}
}