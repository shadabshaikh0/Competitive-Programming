#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
bool compare( const pair<ll,ll> &a,const pair<ll,ll> &b ){
    if( a.first < b.first )
        return false;
    return true; 
}
int main()
{
    	bolt;
		ll n;
		cin>>n;
		vector< pair<ll,ll> > v(n);
        for( ll i=0;i<n;i++ ){
            ll x;
            cin>>x;
            v[i] = make_pair(x,i+1);
        }        
        sort( v.begin(),v.end(),compare ) ;
        ll count = 0;
        
        vector<ll> seq;
        for( ll i=0;i<n;i++ ){
            count += ( ( v[i].first * i) + 1);
            seq.push_back( v[i].second );
        }
        cout<<count<<"\n";
        for( ll i=0;i<seq.size();i++ ){
            cout<<seq[i]<<" ";
        }
        cout<<"\n";
	return 0;
}