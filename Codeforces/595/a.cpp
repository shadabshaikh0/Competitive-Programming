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
        unordered_map<ll,ll> mp;
        for( ll i=0;i<n;i++ ){
            cin>>v[i];
            mp[ v[i] ] = 1;
        }	
        bool flag =false;
        for( ll i=0;i<n;i++ ){
            ll  a = v[i] -1;
            ll  b = v[i] +1;
            if( mp.count(a) ){
                flag  = true;
                break;
            }
            if( mp.count(b) ){
                flag  = true;
                break;
            }
        }
        if(flag )   
            cout<<"2\n";
        else
            cout<<"1\n";

	}
	return 0;
}