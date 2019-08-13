#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll input;
    cin>>input;
    ll finalans = 0;
    for (ll i = 0; i < 32; i++){
            ll count = 0;
            for (ll j = 1; j <= input; j++){
                if ( !((1 << i) & j ) ){
                    count++;
                }
            }
            //cout<<count;
            finalans += ( (1<<i) * (input*(input-1)/2 - count*(count-1)/2) ) % MOD;
            //cout<<finalans;
    }    
    cout<< ( (finalans*2)+ (input*(input+1)/2 ) ) % MOD <<"\n";
    return 0;
}

