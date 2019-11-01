#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    ll i,j;
	bolt;
	ll t;
	cin>>t;

    vector<ll> v(129,-1);
    v[1] = 0;
    
    for( i=1;i<128;i++ ){
        bool flag = false;
        for(  j=i-1;j>0;j-- ){
            if( v[i] == v[j] ){
                flag = true;
                break;
            }        
        }
        if( flag )
            v[i+1] = i-j;
        else
            v[i+1] = 0;
    }

    vector<ll> count(129,0);
    vector<ll> ans(129,0);
    FOR( i,1,128 ){
        ll currentcount = count[ v[i] ];
        ans[i] = currentcount + 1;
        count[ v[i] ]++;
    }

	while(t--){
		ll n;
		cin>>n;
        cout<<ans[n]<<"\n";
	}
	return 0;
}