#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll unsigned long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        k--;
        
        ll res = 1;
        ll first = 2LL;
        
        while(k){
            if( k & 1 )
                res = (res * first) % mod;
            k = k >> 1;
            first = (first * first) % mod;
        }

        cout<< ( 10 * res )% mod;                  
                    
        cout<<"\n";
    }
	return 0;
}
