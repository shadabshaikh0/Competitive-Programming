#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define ld long double
#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if( n >= k ){
            cout<<(k-1)%MOD<<"\n";
        }
        else{
            ll last_term = (k * 2 ) - ( n + k -1 ) - 1; 

            ll diff = n-1;

            ll no_terms  = ceil((ld)last_term/(ld)diff);

            ll first_term =  last_term % diff;
            if( first_term == 0 )
            {
                first_term = diff;
            }   

            ll multi  =  ( (no_terms % MOD) * (( first_term +  last_term )%MOD) ) % MOD;

            ll divide =  ( (multi % MOD) * (500000004 % MOD ) ) % MOD;

            ll add    =  ( (divide % MOD) + ((k-1)%MOD) ) % MOD;
            
            cout<<add<<"\n";

        }
    }
	return 0;
}