#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ld long double
int main()
{
	ll a,b,c,d,i,j,k,n,m,t;
	cin>>t;
	while(t--)
	{
	cin>>n>>a>>b>>c>>d;
	ll A=a-b;
	ll B=a+b;
	ll C=c-d;
	ll D=c+d;
	ll mn=n*A;
	ll mx=n*B;
	//cout<<mn<<' '<<mx<<endl<<C<<' '<<D<<endl;
	if(mn<C and mx<C)
	cout<<"No\n";
	else if(mn>D and mx>D)
	cout<<"No\n";
	else cout<<"Yes\n";
	}
}