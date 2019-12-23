#include<bits/stdc++.h>
#define ll unsigned long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll n;
	cin>>n;
    if( n & 1 ){
        cout<<0<<"\n";
    }
    else{
        ll divide = 10;
        ll ans = 0;
        for( ll i=10; n / i >= 1; i *= 10 ){
            ans += n / i;
        }
        cout<<ans<<"\n";
    }
	return 0;
}