#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//cout.tie(NULL);*/
	ll t,n,a,b,l,r;
	char ch;
	cin>>t;
	t--;
	scanf(" %c %lld%lld",&ch,&a,&b);
	if(a<b)
	{
		l=a;
		r=b;
	}
	else
	{
		l=b;
		r=a;
	}
	while(t--)
	{
		scanf(" %c %lld%lld",&ch,&a,&b);
		if(ch=='+')
		{
			if(a<b)
			{
				l=max(a,l);
				r=max(b,r);
			}
			else
			{
				l=max(b,l);
				r=max(a,r);
			}
			//cout<<"l="<<l<<' '<<"r="<<r<<endl;
		}
		else
		{
			if((l<=a&&r<=b)||(r<=a&&l<=b))
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
}