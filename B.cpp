#include<bits/stdc++.h>
/*
        penguin yes cop code
        https://codeforces.com/profile/Tuanhaiphong2
*/
using namespace std;
#define ll long long
#define fi first
#define se second
#define MOD 1000000007
const int MAXN = 4e5+7;
vector<ll> topo;
static ll in[1000];
ll dx[8] = {-1,0,0,1,-1,-1,1,1};
ll dy[8] = {0,-1,1,0,-1,1,-1,1};
static ll Hash,base = 131,k,n,a[MAXN],b[MAXN],dp[5007][5007],pre[MAXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,index,note,cnt;
    string ss,stt,sss,str,st,s;
    cin >> tt;
    map<ll,bool> f,ff;
    while(tt--){
        cin >> n >> k;
        for (i = 1;i <= n*2;i++)
        cin >> a[i];
        for (i = 1;i <= n;i++)
        f[a[i]] = true;
        vector<ll> v;
        for (i = n+1;i <= n*2;i++){
            ff[a[i]] = true;
            if (f[a[i]]==true)v.push_back(a[i]);
           // else cout << f[a[i]] << ' ';
        }
        if (v.size()%2==1)v.pop_back();
        note = v.size();
        x = min(k*2,v.size()*1ll);
        note = x;
        for (i = 0;i < note;i++)
        cout << v[i] << ' ';
        x = k*2 - x;
        y = x;
        for (i = 1;i <= n;i++){
            if (x<=0)break;
            if (ff[a[i]]==false){
                cout << a[i] << ' ';
                x--;
                if (x<=0)break;
                cout << a[i] << ' ';
                x--;
                ff[a[i]] = true;
            }
        }
        x = y;
        cout << '\n';
        for (i = 0;i < note;i++)
        cout << v[i] << ' ';
        for (i = n+1;i <= n*2;i++){
            if (x<=0)break;
            if (f[a[i]]==false){
                cout << a[i] << ' ';
                x--;
                if (x<=0)break;
                cout << a[i] << ' ';
                x--;
                f[a[i]] = true;
            }
        }
        cout << '\n';
        f.clear();
        ff.clear();
        v.clear();
    }
    return (0^0)&(200+10);
}
/*
  4 9 2 4
1 0 0 0 0
9 0 1 1 1
7 0 1 1 1
3 0 1 1 1
4 0 1 1 2
5 6
-2 -1 2 10 3
-2 -3 -1 9 12
 T


4 1
1 2 3 4 1 2 3 4

*/
