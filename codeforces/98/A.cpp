#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	string s;
	cin>>s;
	ll ar[]={0,1,2,3,4,5};
	map<string,ll> mp;
	ll ctr=0;
	do
	{
		string s1;
		for(i=0;i<6;i++)
		s1+=s[ar[i]];
		string s4="ZZZZZZ";
		string q;
		s4=min(s4,q+s1[0]+s1[2]+s1[4]+s1[3]+s1[5]+s1[1]);
		s4=min(s4,q+s1[0]+s1[4]+s1[3]+s1[5]+s1[2]+s1[1]);
		s4=min(s4,q+s1[0]+s1[3]+s1[5]+s1[2]+s1[4]+s1[1]);
		s4=min(s4,q+s1[0]+s1[5]+s1[2]+s1[4]+s1[3]+s1[1]);
		
		s4=min(s4,q+s1[1]+s1[5]+s1[3]+s1[4]+s1[2]+s1[0]);
		s4=min(s4,q+s1[1]+s1[3]+s1[4]+s1[2]+s1[5]+s1[0]);
		s4=min(s4,q+s1[1]+s1[4]+s1[2]+s1[5]+s1[3]+s1[0]);
		s4=min(s4,q+s1[1]+s1[2]+s1[5]+s1[3]+s1[4]+s1[0]);
		
		s4=min(s4,q+s1[2]+s1[1]+s1[4]+s1[0]+s1[5]+s1[3]);
		s4=min(s4,q+s1[2]+s1[4]+s1[0]+s1[5]+s1[1]+s1[3]);
		s4=min(s4,q+s1[2]+s1[0]+s1[5]+s1[1]+s1[4]+s1[3]);
		s4=min(s4,q+s1[2]+s1[5]+s1[1]+s1[4]+s1[0]+s1[3]);
		
		s4=min(s4,q+s1[3]+s1[5]+s1[0]+s1[4]+s1[1]+s1[2]);
		s4=min(s4,q+s1[3]+s1[0]+s1[4]+s1[1]+s1[5]+s1[2]);
		s4=min(s4,q+s1[3]+s1[4]+s1[1]+s1[5]+s1[0]+s1[2]);
		s4=min(s4,q+s1[3]+s1[1]+s1[5]+s1[0]+s1[4]+s1[2]);
		
		s4=min(s4,q+s1[4]+s1[0]+s1[2]+s1[1]+s1[3]+s1[5]);
		s4=min(s4,q+s1[4]+s1[2]+s1[1]+s1[3]+s1[0]+s1[5]);
		s4=min(s4,q+s1[4]+s1[1]+s1[3]+s1[0]+s1[2]+s1[5]);
		s4=min(s4,q+s1[4]+s1[3]+s1[0]+s1[2]+s1[1]+s1[5]);
		
		s4=min(s4,q+s1[5]+s1[2]+s1[0]+s1[3]+s1[1]+s1[4]);
		s4=min(s4,q+s1[5]+s1[0]+s1[3]+s1[1]+s1[2]+s1[4]);
		s4=min(s4,q+s1[5]+s1[3]+s1[1]+s1[2]+s1[0]+s1[4]);
		s4=min(s4,q+s1[5]+s1[1]+s1[2]+s1[0]+s1[3]+s1[4]);
		
		mp[s4]++;
	}while(next_permutation(ar,ar+6));
	cout<<mp.size()<<endl;
	//for(auto x:mp)
	//cout<<x.first<<' '<<x.second<<endl;
}