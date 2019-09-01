#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define A 1001
using namespace std;


int main()
{
	bolt;
	ll t;
	cin>>t;
    vector< vector<int> > dp( A, vector<int>(A) );
    
    for( int r=0;r<A;r++ ){
        dp[r].resize(r+1);
        for( int c=0;c<=r;c++ ){
            if( c == 0 || c== r ){
                dp[r][c] =1;
            }
            else{
                dp[r][c] =dp[r-1][c] + dp[r-1][c-1];
            }
        }
    }
	while(t--){
		ll n;
		cin>>n;
        cout<<(dp[n-1][2])/2<<"\n";
	}
	return 0;
}