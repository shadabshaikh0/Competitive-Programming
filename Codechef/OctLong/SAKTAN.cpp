#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( int i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n,m,q;
		cin>>n>>m>>q;
        ll i,j;
        vector<ll> row(n,0),col(m,0);
        FOR(i,1,q){
            ll x,y;
            cin>>x>>y;
            row[--x]++;
            col[--y]++;
        }
        ll ans = 0;
        ll o1=0,e1=0;
        ll o2=0,e2=0;
        FOR(i,0,n-1){
            if( row[i] & 1 )
                o1++;
            else
                e1++;
        }
        FOR(i,0,m-1){
            if( col[i] & 1 )
                o2++;
            else
                e2++;
        }
        cout<<o1*e2+e1*o2<<"\n";
	}
	return 0;
}