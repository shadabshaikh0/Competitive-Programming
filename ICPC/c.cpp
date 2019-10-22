#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define pairr pair<ll,ll>
bool intersect( ll l1,ll r1,ll l2,ll r2 ){
    if( r1 >= l2 ){
        return true;
    }
    else
        return false;
}

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
        unordered_map<ll,vector< pairr> > mp;
        ll i;
        for(i=1;i<=n;i++){
            ll l,r,v;
            cin>>l>>r>>v;
            mp[ v ].push_back( make_pair(l,r) );
        }
        bool flag = false;
        for( auto it:mp ){
            ll len = it.second.size();
            if( len > 2 ){
                vector< pairr> v =it.second;
                sort( v.begin(),v.end() );
                ll prevx,prevy=0;
                for( i=0;i<=n-3;i++ ){
                    bool c = intersect( v[i].first,v[i].second,v[i+2].first,v[i+2].second );
                    bool a = intersect( v[i].first,v[i].second,v[i+1].first,v[i+1].second );                        
                    bool b = intersect( v[i+1].first,v[i+1].second,v[i+2].first,v[i+2].second );
                    ll curx=max(v[i+1].first,v[i+2].first);
                
                    bool temp = a & c & b;
                    if( temp ){
                        flag  = true;
                        break;
                    }
                    if(prevy>=curx) {
                        flag  = true;
                        break;
                    }
                    prevy=max(prevy,v[i+2].second);
                    prevy=max(prevy,v[i+1].second);
                    prevy=max(prevy,v[i].second);
                }
            }
        }
        if( !flag )
            cout<<"YES\n";
        else
            cout<<"NO\n";

	}
	return 0;
}