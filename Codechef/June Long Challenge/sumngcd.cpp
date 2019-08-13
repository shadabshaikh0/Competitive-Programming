#include<bits/stdc++.h>
#define ll long long int 
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
        if( n == 2 ){
            ll a,b;
            cin>>a>>b;
            cout<<a+b<<"\n";
        }
        else{

            vector<ll> left(n),right(n);
            set<ll> s;
            for(ll i=0;i<n;i++){
                ll x;
                cin>>x;
                s.insert(x);
            }

            vector<ll> v(s.begin(),s.end());
            s.clear();
            n = v.size();

            left[0] = v[0];
            for(ll i=1;i<n;i++){
                left[i] = __gcd( left[i-1],v[i] );
            }

            right[n-1] = v[n-1];
            for(ll i=n-2;i>=0;i--){
                right[i] = __gcd( right[i+1],v[i] );
            }
            
            ll maxans = -1;
            maxans = max(maxans,v[0]+right[1]);

            for(ll i=1;i<=n-2;i++){
                maxans = max( maxans,v[i]+  __gcd( left[i-1],right[i+1]) );
            }
            maxans = max(maxans,v[n-1]+left[n-2]);
            cout<<maxans<<"\n";
        }
	}  
	return 0;
}