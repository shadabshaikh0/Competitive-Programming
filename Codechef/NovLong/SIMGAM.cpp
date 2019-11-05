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
        priority_queue<ll> pq;

        vector< vector<ll> > v(n);
        ll sum  = 0;
        for( ll i=0;i<n;i++ ){
            ll m;
            cin>>m;
            v[i].resize(m);
            ll index = m/2;
            for( ll j=0;j<m;j++ ){
                cin>>v[i][j];    
                if( j < index )
                    sum += v[i][j];
            }            
            if( m & 1 ) 
                pq.push( v[i][index] );
        }
        bool taken = false;
        while(!pq.empty()){
            if( !taken ){
                sum += pq.top();
                pq.pop();
                taken = true;
            }
            else{
                pq.pop();
                taken = false;            
            }
        }

        cout<<sum<<"\n";
	}
	return 0;
}