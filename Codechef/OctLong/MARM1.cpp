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
		ll n,k;
		cin>>n>>k;
		vector<ll> v(n);
		vector<ll> ans(n,0);
		RD(v,n);	
        ll div = k/n;
        ll rem = k%n;        
        vector<ll> count(n,div);
        ll i=0;
        while(rem--){
            count[i++]++;
        }
        ll mid = n /2;
        FOR(i,0,n-1){
            if( (n&1) && i == mid ) 
            {}                
            else
                count[i] = count[i] % 3;
        }
        if( n & 1 ){
            for(i=0;i<=mid-1;i++){
                if( count[i] == 1 )
                    ans[i] = v[i] ^ v[n-i-1];
                else if( count[i] == 2 )
                    ans[i] = v[n-i-1];
                else 
                    ans[i] = v[i];
            }
            if( count[mid] & 1 )
                ans[mid] = 0;
            else
                ans[mid] = v[mid];

            for(i=mid+1;i<=n-1;i++){
                if( count[i] == 1 )
                    ans[i] = v[n-i-1];                
                else if( count[i] == 2 )
                    ans[i] = v[i] ^ v[n-i-1];
                else
                    ans[i] = v[n-i-1];                
            }            
        }
        else{
            FOR(i,0,mid-1){
                if( count[i] == 1 )
                    ans[i] = v[i] ^ v[n-i-1];
                else if( count[i] == 2 )
                    ans[i] = v[n-i-1];
                else 
                    ans[i] = v[i];
            }
            FOR(i,mid,n-1){
                if( count[i] == 1 )
                    ans[i] = v[n-i-1];                
                else if( count[i] == 2 )
                    ans[i] = v[i] ^ v[n-i-1];
                else
                    ans[i] = v[n-i-1];                
            }            
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
	}
	return 0;
}