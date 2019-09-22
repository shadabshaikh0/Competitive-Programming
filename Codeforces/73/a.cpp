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
		vector<ll> v(n);
		vector<ll> count(12,0);
        for( ll i=0;i<n;i++ ){
            ll x;
            cin>>x;
            if( log2(x) <=11 )
                count[ log2(x)]++;
        }
        ll ans = 0;
        ll flag = 0;
        if( count[11] == 0 )
        {
            for( ll i=10;i>=0;i--){
                ans += ( count[i] * pow(2,i));
                if( ans >= 2048 ){
                    flag =1;
                    break;
                }
            }
        }
        else    
            flag = 1;

        if( flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	return 0;
}