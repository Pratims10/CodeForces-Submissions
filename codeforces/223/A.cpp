#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll i,j,k,t,n,m;
	string s;
	cin>>s;
	n=s.length();
	stack<pair<char,ll>> st;
	vector<pair<ll,ll>> v;
	ll f[n];
	f[0]=0;
	if(s[0]=='[')f[0]=1;
	for(i=1;i<n;i++)
	{
		f[i]=f[i-1];
		if(s[i]=='[')
		f[i]++;
	}
	ll mx=0,L,R;
	for(i=0;i<n;i++)
	{
		if(s[i]==')' or s[i]==']')
		{
			if(st.empty()) continue;
		}
		if(s[i]=='(' or s[i]=='[')
		st.push({s[i],i});
		else if(s[i]==')')
		{
			if(st.top().first=='(')
			{
				ll l=st.top().second;
				ll r=i;
				v.push_back({l,r});
				st.pop();
			}
			else
			{
				while(!st.empty()) st.pop();
			}
		}
		else if(s[i]==']')
		{
			if(st.top().first=='[')
			{
				ll l=st.top().second;
				ll r=i;
				v.push_back({l,r});
				st.pop();
			}
			else
			{
				while(!st.empty()) st.pop();
			}
		}
	}
	if(v.size()==0)
	{
		cout<<"0\n";
		return 0;
	}
	ll d[n+1]={0};
	for(i=0;i<v.size();i++)
	{
		ll l=v[i].first;
		ll r=v[i].second;
		//cout<<l<<' '<<r<<endl;
		d[l]++;
		d[r+1]--;
	}
	for(i=1;i<n;i++)
	{
		d[i]+=d[i-1];
	}
	
	for(i=0;i<n;)
	{
		if(d[i]==0)
		{
			i++;
			continue;
		}
		ll l=i;
		while(i<n and d[i]!=0)
		{
			i++;
		}
		ll ctr;
		if(l==0)
		ctr=f[i-1];
		else ctr=f[i-1]-f[l-1];
		//cout<<ctr<<endl;
		if(mx<ctr){
			//cout<<l<<' '<<i-1<<endl;
			mx=ctr;
			L=l;
			R=i-1;
		}
	}
	cout<<mx<<"\n";
	for(i=L;i<=R;i++)
	cout<<s[i];
}