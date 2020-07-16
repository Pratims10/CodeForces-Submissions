#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	string s;
	cin>>s;
	n=s.length();
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(i=2;i<=n;i++)
	{
		if(prime[i])
		for(j=2*i;j<=n;j+=i)
		prime[j]=false;
	}
	ll ctr=1;
	ll pos[n+1];
	memset(pos,0,sizeof(pos));
	pos[1]=1;
	for(i=1;i<=n;i++)
	{
		if(prime[i] and i*2>n){
			pos[i]=1;
			ctr++;
		}
	}
	ll f[26]={0};
	for(i=0;i<n;i++)
	f[s[i]-'a']++;
	ll mx=0,mxpos;
	for(i=0;i<26;i++)
	{
		if(mx<f[i])
		{
			mx=f[i];
			mxpos=i;
		}
	}
	if(mx>=n-ctr)
	{
		cout<<"YES\n";
		string s;
		for(i=1;i<=n;i++)
		{
			if(pos[i]) s+='1';
			else s+=(char)(mxpos+'a'),f[mxpos]--;
		}
		j=0;
		for(i=0;i<n;i++)
		{
			while(j<26 and f[j]==0) j++;
			if(s[i]=='1'){
				s[i]=(char)(j+'a');
				f[j]--;
			}
		}
		cout<<s;
	}
	else
	cout<<"NO";
}