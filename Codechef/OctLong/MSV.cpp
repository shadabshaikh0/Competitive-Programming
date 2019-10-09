#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( int i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 1000001
int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
        vector<ll> count(MAX,0);
        ll i;
        vector<ll> ans(n,0);
        FOR(i,0,n-1){
            ll x;
            cin>>x;
            ans[i] = count[x];
            ll j;
            FOR(j,1,sqrt(x)){
                if( x % j == 0 ){
                    if( x /j == j ){
                        count[j]++;
                    }
                    else{
                        count[j]++;
                        count[x/j]++;
                    }
                }
            }
        }
        cout<<*max_element(ans.begin(),ans.end())<<"\n";
	}
	return 0;
}