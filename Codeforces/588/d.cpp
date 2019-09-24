#include<bits/stdc++.h>
#define ll long long int 
#define forr(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define ford(i,a,b) for( int i=(a) ; i>=(b) ; --i)
#define pairr pair<ll,ll>
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll n;
	cin>>n;
    ll i;
    vector< pairr > v(n);
    unordered_map<ll,ll> mp;
    forr( i,0,n-1 ){
        cin>>v[i].first;
        mp[ v[i].first ]++;
    }
    forr( i,0,n-1 )
        cin>>v[i].second;

    vector<ll> dp;
    for( auto it:mp ){
        if( it.second >= 2  )
            dp.push_back(it.first);
    }   
    ll ans = 0;
    forr( i,0,n-1 ){
        for( auto &j:dp ){
            if( (v[i].first & j) == v[i].first ){
                ans += v[i].second;
                break;
            }
        }
    }
    cout<<ans<<"\n";
	return 0;
}