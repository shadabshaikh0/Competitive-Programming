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
        vector< vector<ll> > dp = { 
                                    { 0,0,0,0,0,0,0,0,0,0,0 },
                                    { 0,1,3,6,10,15,21,28,36,45,45},
                                    { 0,2,6,12,20,20,22,26,32,40,40 },
                                    { 0,3,9,18,20,25,33,34,38,45,45 },
                                    { 0,4,12,14,20,20,24,32,34,40,40 },
                                    { 0,5,5,10,10,15,15,20,20,25,25 },
                                    { 0,6,8,16,20,20,26,28,36,40,40 },
                                    { 0,7,11,12,20,25,27,36,42,45,45},
                                    { 0,8,14,18,20,20,28,34,38,40,40},
                                    { 0,9,17,24,30,35,39,42,44,43,43 } 
                                 };

	while(t--){
		ll n,m;
		cin>>n>>m;


        ll ans = 0;

        ll lastm = m % 10;
        ll div = n / (m*10);
        ans += ( div * dp[lastm][10]);

        ll rem = n - ( div * m*10);
        rem = rem / m;

        ll temp = m;
        for( ll i= 0; i < rem ;i++ ){
            ans += temp%10;
            temp += m;
        }

        // ll start =  div * ( m*10);

        // ll index = rem / m;

        // ans += dp[lastm][index];
        cout<<ans<<"\n";

	}
	return 0;
}