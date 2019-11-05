#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v(n);
        vector< ll > index(n);

        for( ll i=0;i<n;i++ ){
            cin>>v[i];
            index[ v[i]-1 ] = i;
        }

        ll count = n-1;
        ll loc = 0;
        while( count > 0 ){
            if( loc < n ){
                ll pos = index[loc];
                if( pos == loc )
                    continue;
                for( ll i = pos-1;i>loc;i--){
                    swap( v[i],v[i+1] );
                    count--;
                    if( count == 0 )
                        break;
                }
            }
            else{
                break;
            }
            loc++;            
        }

        for( auto &it : v ){
            cout<<it<<" ";
        }
        cout<<"\n";
	}
	return 0;
}