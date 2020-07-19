#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll i,j,k,t,n,m,a,b,c;
	cin>>n;
	string s1,s2,s3;
	map<pair<ll,ll>,ll> mp;
	
	map<string,ll> val;
	val["Anka"]=1;
	val["Chapay"]=2;
	val["Cleo"]=3;
	val["Troll"]=4;
	val["Dracul"]=5;
	val["Snowy"]=6;
	val["Hexadecimal"]=7;
	
	for(i=0;i<n;i++)
	{
		cin>>s1>>s2>>s3;
		mp[{val[s1],val[s3]}]=1;
	}
	ll mn=INT_MAX;
	cin>>a>>b>>c;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			k=7-i-j;
			if(k<1) continue;
			ll x,y,z;
			x=a/i;
			y=b/j;
			z=c/k;
			ll diff=max(x,max(y,z))-min(x,min(y,z));
			mn=min(mn,diff);
		}
	}
	cout<<mn<<' ';
	vector<vector<ll>> v;
	ll ar[7]={1,2,3,4,5,6,7};
	do{
		vector<ll> v1;
		for(i=0;i<7;i++)
		v1.push_back(ar[i]);
		v.push_back(v1);
	}while(next_permutation(ar,ar+7));
	/*for(auto x:v)
	{
		for(auto y:x)
		cout<<y<<' ';
		cout<<endl;
	}*/
	ll ans=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			k=7-i-j;
			if(k<1) continue;
			ll x,y,z;
			x=a/i;
			y=b/j;
			z=c/k;
			ll diff=max(x,max(y,z))-min(x,min(y,z));
			if(diff==mn)
			{
				for(ll p=0;p<v.size();p++)
				{
					ll ctr=0,q,r;
					for(q=0;q<i;q++)
					{
						for(r=0;r<i;r++)
						ctr+=mp[{v[p][q],v[p][r]}];
					}
					for(q=i;q<i+j;q++)
					{
						for(r=i;r<i+j;r++)
						ctr+=mp[{v[p][q],v[p][r]}];
					}
					for(q=i+j;q<7;q++)
					{
						for(r=i+j;r<7;r++)
						ctr+=mp[{v[p][q],v[p][r]}];
					}
					ans=max(ans,ctr);
				}
			}
		}
	}
	cout<<ans;
}