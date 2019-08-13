#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,num;
        cin>>n;
        num = n;
        
        ll sum = 0;
        while(n){
            ll temp = n % 10;
            sum += temp;
            n =  n / 10;
        }


        if( sum % 10  ){
            ll append_number =   ( ( ( (sum/10) + 1) * 10 ) - sum );        
            cout<< num * 10 + append_number <<"\n";       
        }
        else{
            cout<<num*10<<"\n";            
        }
    }
	return 0;
}