#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MOD 1000000007
int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
        ll a,b,c,d,e,n;
        cin>>a>>b>>c>>d>>e>>n;
        vector<ll> v(n,0);
        v[0] = 0,v[1] = 1,v[2]=2,v[3] = 3;
        for( ll i = 4;i<n;i++ ){
           ll t1 = ((v[i-1] % MOD) * (a%MOD)) % MOD ;
           ll t2 = ((v[i-2] % MOD) * (b%MOD)) % MOD ;
           ll t3 = ((v[i-3] % MOD) * (c%MOD)) % MOD ;
           ll t4 = ((v[i-4] % MOD) * (d%MOD)) % MOD ;

           ll temp = (t1+t2)%MOD;
            temp   = (temp+t3 )%MOD;
            temp   = (temp+t4 )%MOD;
            temp   = (temp+e )%MOD;

            v[i] = temp;
            cout<<v[i]<<" ";
        }
        cout<<v[n-1]<<"\n";
	}
	return 0;
}