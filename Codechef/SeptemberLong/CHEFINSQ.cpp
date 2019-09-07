#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

ll findnck( ll n,ll k ){
    if( k > n-k  )
        k = n -k ;

    ll res = 1;
    for( ll i=0;i<k;i++ ){
        res *= ( n - i );
        res /= ( i + 1 );
    }
    return res;
}

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll> v(n);
		RD(v,n);
        if( n < k )
            cout<<0<<"\n";
        else{
            sort( v.begin(),v.end() );            
            unordered_map<ll,ll> mp;
            ll i;
            for( i=0;i<k;i++ ){
                mp[ v[i] ]++;
            }    
            ll count = 0;        
            for( ;i<n;i++ ){
                if( v[i] != v[k-1]  ){
                    break;
                }
                else
                    count++;
            }
            cout<<findnck( mp[ v[k-1] ]+count,count)<<"\n";
        }
	}
	return 0;
}