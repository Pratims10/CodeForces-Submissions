#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void build(ll t[][26],ll n)
{
  for (ll i = n - 1; i > 0; --i)
  {
  	for(ll j=0;j<26;j++)
  	t[i][j]=t[i<<1][j]+t[i<<1|1][j];
  }
}
void modify(ll t[][26],ll n,ll p,char a,char b)
{
	t[p+n][a-97]--;
	t[p+n][b-97]++;
  for (p+=n; p > 1; p>>=1) {
  	for(ll j=0;j<26;j++)
  t[p>>1][j]= t[p][j] + t[p^1][j];
  }
}
ll query(ll t[][26],ll n,ll l, ll r)
{
	ll res[26]={0};
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1)
	{
		for(ll j=0;j<26;j++)
		{
	//		cout<<t[l][j]<<" ";
			res[j]+=t[l][j];
		}
	//	cout<<endl;
		l++;
	}
    if (r&1)
	{
		--r;
		for(ll j=0;j<26;j++)
		{
	//		cout<<t[r][j]<<" ";
			res[j]+= t[r][j];
		}
	//	cout<<endl;
	}
  }
  ll ctr=0;
  for(ll i=0;i<26;i++)
  if(res[i]>0)
  ctr++;
  return ctr;
}
int main() {
	ll q,i,j,k;
	string s;
	cin>>s;
	ll n=s.length();
	ll t[2 * n+1][26]={0};
  for (i = 0; i < n; ++i)
  {
  	t[n+i][s[i]-97]++;
  }
  build(t,n);
  cin>>q;
  while(q--)
  {
  /*	cin>>j;
  	for(i=0;i<26;i++)
  	cout<<t[j][i]<<' ';
  	cout<<endl;*/
  	ll a,b,c;
  	cin>>a>>b;
	if(a==1)
	{
		char ch;
		cin>>ch;
		b--;
  		modify(t,n,b,s[b],ch);
  		s[b]=ch;
  	}
  	else
  	{
  		cin>>c;
  		b--;
  		printf("%lld\n",query(t,n,b,c));
  	}
  	/*for(i=0;i<26;i++)
  	cout<<t[24][i]<<' ';
  	cout<<endl;
  	for(i=0;i<26;i++)
  	cout<<t[12][i]<<' ';
  	cout<<endl;*/
   }
}