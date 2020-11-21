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
		string s1,s2;
		cin>>s1>>s2;
		ll f1[26]={0};
		ll f2[26]={0};
		for(i=0;i<n;i++)
		{
			f1[s1[i]-'a']++;
			f2[s2[i]-'a']++;
		}
		bool f=true;
		for(i=25;i>=0;i--)
		{
			if(f1[i]==f2[i]) continue;
			if(f2[i]<f1[i])
			f=false;
			ll diff=f2[i]-f1[i];
			if(diff%k!=0)
			f=false;
			else
			{
				for(j=i-1;j>=0;j--)
				{
					while(f1[j]>=k and f1[i]!=f2[i])
					{
						f1[j]-=k;
						f1[i]+=k;
					}
				}
				if(f1[i]!=f2[i])
				f=false;
			}
		}
		if(f)
		cout<<"Yes\n";
		else cout<<"No\n";
		
	}
}