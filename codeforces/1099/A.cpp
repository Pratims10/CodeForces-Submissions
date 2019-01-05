#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll w,h,u1,d1,u2,d2;
	cin>>w>>h>>u1>>d1>>u2>>d2;
	for(ll i=h;i>=0;i--)
	{
		w+=i;
		if(i==d1)
		w-=u1;
		if(i==d2)
		w-=u2;
		if(w<0)
		w=0;
	}
	cout<<w<<endl;
}