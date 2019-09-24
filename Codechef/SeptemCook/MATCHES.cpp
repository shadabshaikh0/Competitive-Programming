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
	vector<ll> dp(10);
	dp[0] = 6;
	dp[1] = 2;
	dp[2] = 5;
	dp[3] = 5;
	dp[4] = 4;
	dp[5] = 5;
	dp[6] = 6;
	dp[7] = 3;
	dp[8] = 7;
	dp[9] = 6;

	while(t--){
		ll a,b;
		cin>>a>>b;
		ll sum = a+b;
		ll count=0;
		while(sum){
			count += dp[ sum%10 ];
			sum = sum /10;
		}
		cout<<count<<"\n";
	}
	return 0;
}