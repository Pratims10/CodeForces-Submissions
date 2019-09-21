#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll l,b,i,j,k,m,n,t,x1,x2,y1,y2,x3,x4,x5,x6,y3,y4,y5,y6;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	cin>>x5>>y5>>x6>>y6;
	bool flag=true;
	if(!(x5<=x1&&x1<=x6&&y5<=y1&&y1<=y6) && !(x3<=x1&&x1<=x4&&y3<=y1&&y1<=y4))
	flag=false;
	if(!(x5<=x2&&x2<=x6&&y5<=y1&&y1<=y6) && !(x3<=x2&&x2<=x4&&y3<=y1&&y1<=y4))
	flag=false;
	if(!(x5<=x1&&x1<=x6&&y5<=y2&&y2<=y6) && !(x3<=x1&&x1<=x4&&y3<=y2&&y2<=y4))
	flag=false;
	if(!(x5<=x2&&x2<=x6&&y5<=y2&&y2<=y6) && !(x3<=x2&&x2<=x4&&y3<=y2&&y2<=y4))
	flag=false;
	//if(x3<=x4&&x4<=x5&&x5<=x6)
	{
		if(x4<x5||x6<x3)
		{
			flag=false;
		}
	}
	if(y4<y5||y6<y3)
	flag=false;
	if(x5<=x1&&y5<=y1&&x6>=x2&&y6>=y2)
	flag=true;
	if(x3<=x1&&y3<=y1&&x4>=x2&&y4>=y2)
	flag=true;
	if(flag)
	cout<<"NO\n";
	else cout<<"YES\n";
}