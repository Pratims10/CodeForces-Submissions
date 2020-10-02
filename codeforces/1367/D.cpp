#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool allZeroes(ll ar[],ll m)
{
	for(ll i=0;i<m;i++)
	if(ar[i]>=0)
	return false;
	return true;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.length();
		cin>>m;
		ll f[26]={0};
		for(i=0;i<n;i++)
		f[s[i]-'a']++;
		ll b[m];
		for(i=0;i<m;i++)
		cin>>b[i];
		ll ch=25;
		string ans;
		for(i=0;i<m;i++)
		ans+=" ";
		while(!allZeroes(b,m))
		{
			ll ctr=0;
			for(i=0;i<m;i++)
			if(b[i]==0){
				ctr++;
			}
			while(f[ch]<ctr)
			ch--;
			vector<ll> v;
			for(i=0;i<m;i++)
			{
				if(b[i]==0)
				{
					v.push_back(i);
					b[i]=-1;
					ans[i]=(char)(ch+'a');
				}
			}
			for(auto x:v)
			{
				for(i=0;i<m;i++)
				{
					if(b[i]!=-1)
					b[i]-=abs(i-x);
				}
			}
			f[ch]=0;
		}
		cout<<ans<<endl;
	}
}