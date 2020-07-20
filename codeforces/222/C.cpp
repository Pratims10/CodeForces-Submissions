#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAXN 10000001 
ll spf[MAXN];
void sieve() 
{ 
    spf[1] = 1; 
    for (ll i=2; i<MAXN; i++) 
        spf[i] = i;
    for (ll i=4; i<MAXN; i+=2)
        spf[i] = 2;
    for (ll i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i) 
        {
            for (ll j=i*i; j<MAXN; j+=i)
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 
vector<ll> getFactorization(ll x) 
{ 
    vector<ll> ret; 
    while (x != 1) 
    { 
        ret.push_back(spf[x]); 
        x = x / spf[x]; 
    } 
    return ret; 
}
void output(ll ar[],map<ll,ll> mp,ll n)
{
	for(ll i=0;i<n;i++)
	{
		ll op=ar[i];
		vector<ll> v=getFactorization(ar[i]);
		for(auto x:v)
		{
			if(mp[x]>0)
			{
				mp[x]--;
				op/=x;
			}
		}
		cout<<op<<' ';
	}
	cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	sieve();
	ll i,j,k,t,n,m;
	cin>>n>>m;
	ll ar[n],b[m];
	map<ll,ll> mp1,mp2;
	j=k=1;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		vector<ll> v=getFactorization(ar[i]);
		for(auto x:v)
		mp1[x]++;
	}
	for(i=0;i<m;i++)
	{
		cin>>b[i];
		vector<ll> v=getFactorization(b[i]);
		for(auto x:v)
		mp2[x]++;
	}
	map<ll,ll> mp;
	//cout<<"S";
	for(auto x:mp1)
	{
		mp[x.first]=x.second-mp2[x.first];
	}
	//cout<<"A";
	for(auto x:mp2)
	{
		if(!mp[x.first])
		mp[x.first]=mp1[x.first]-x.second;
	}
	//cout<<"D";
	map<ll,ll> mp3,mp4;
	for(auto x:mp)
	if(x.second>0)
		mp3[x.first]=x.second;
	else if(x.second<0)
		mp4[x.first]=-1*x.second;
	for(auto x:mp3)
	mp1[x.first]-=x.second;
	for(auto x:mp4)
	mp2[x.first]-=x.second;
	
	cout<<n<<' '<<m<<endl;
	output(ar,mp1,n);
	output(b,mp2,m);
}