#include<bits/stdc++.h>

using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0)
#define sci(a) scanf("%d",&a)
#define scl(a) scanf("%I64d",&a)
#define scc(a) scanf("%c",&a)
#define scf(a) scanf("%f",&a)
#define scd(a) scanf("%lf",&a)
#define scs(a) scanf("%s",&a)
#define printi(x) printf("%d\n",x)
#define printl(x) printf("%lld\n",x)
#define loop(i,a,n) for(int i=a;i<n;++i)
#define loopd(i,a,n) for(int i=a;i>=n;--i)
#define nl printf("\n");
#define ll long long int
#define mp(a,b) make_pair(a,b)
#define pi pair < int,int >
#define pl pair < ll,ll >
#define pb push_back
#define maxi 100005
#define MOD (1000000007LL)
#define INF 1e18
#define MAXI 1000005
#define ff first
#define ss second
static int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
static int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1};
ll power(ll base, ll p){
ll ans = 1;while(p){if(p&1)ans=(ans*base);base=(base*base);p/=2;}return ans;
}

ll modPower(ll base, ll p, ll mod = MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}

ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}
/////////////////////////////////////////////Solution From Here//////////////////////////////////////////////////////////


vector<int> adj[MAXI];
bool vis[MAXI];
ll d[MAXI];
long double prob[MAXI];

void bfs(int s)
{
    memset(d,0,sizeof(d));
    memset(vis,false,sizeof(vis));
    deque<int> q;
    vis[s] = 1;
    d[s] = 0;
    prob[s] = 1.0;
    q.pb(s);
    while(!q.empty()) {
        int u = q.front();
        q.pop_front();

        for(int i=0;i<adj[u].size();++i) {
            if(!vis[adj[u][i]]) {
                vis[adj[u][i]] = 1;
                d[adj[u][i]] = d[u] + 1;
                if(u!=1)prob[adj[u][i]] = prob[u]*(1.0/(long double)(adj[u].size()-1));
                else prob[adj[u][i]] = prob[u]*(1.0/(long double)(adj[u].size()));
                q.pb(adj[u][i]);
            }
        }

    }
}



int main()
{

    SPEED;
                            int n;
                            cin>>n;
                            loop(i,1,n) {
                                int u,v;
                                cin>>u>>v;
                                adj[u].pb(v);
                                adj[v].pb(u);
                            }
                            if(n == 1)
                            {
                                cout<<"0";
                                return 0;
                            }
                            vector<int> ans;
                            ans.clear();
                            loop(i,2,n+1) {
                                if(adj[i].size() == 1)
                                    ans.pb(i);
                            }
                            bfs(1);
                            long double dd = 0.0;
                            loop(i,0,ans.size()) {

                                dd += d[ans[i]]*prob[ans[i]];

                            }
                           // cout<<dd;

                        //  long double a = (dd)/(long double)ans.size();

                           cout<<setprecision(20)<<dd;


}

