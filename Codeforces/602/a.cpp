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

        vector< pair<ll,ll> > v;
        
        for( ll i=0;i<n;i++ ){
            ll l,r;
            cin>>l>>r;
            v.push_back( make_pair(l,0) );
            v.push_back( make_pair(r,1) );
        }
        if( n  == 1 ){
            cout<<0<<"\n";
            continue;
        }
        n = v.size();
            sort( v.begin(),v.end() );
            ll start = 0,end  = 0;
            for( ll i=0;i<n;i++ ){
                if( v[i].second == 1 ){
                    start = v[i].first;
                    break;
                }
            }
            for( ll i=n-1;i>=0;i-- ){
                if( v[i].second == 0   ){
                    end = v[i].first;
                    break;
                }
            }
            if( end > start )
                cout<< end-start<<"\n";
            else
                cout<<1<<"\n";
	}
	return 0;
}