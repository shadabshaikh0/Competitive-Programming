#include<bits/stdc++.h>
#include <sstream>
#define ll long long int 
#define ull unsigned long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
using namespace std;

int main()
{
    
	bolt;
	ll t;
	cin>>t;
	while(t--){        
        ull Nl,Nr;
        ull L,R;
        cin>>Nl>>L;
        cin>>Nr>>R;
        
        ull sum = 0;
        for( ull i = L;i<=R;i++ ){
            ull currentsum = 0;

            string current;
            stringstream str;
            str << i;
            str >> current;

            ull n =current.length();
            ull index = n-1;

            if( n == 1 ){
                currentsum += (current[0]-'0')  ;                
            }   
            else{
                char prev = current[0]; 
                currentsum = ( (currentsum % MOD) +  ( ( ((prev-'0')%MOD)  *  ( (ll)pow(10,index)%MOD )  ) % MOD) %MOD )%MOD ; 
                ull i = 1;
                index--;
                do{
                    char curr = current[i]; 
                    if( prev != curr ){
                        currentsum = ( (currentsum % MOD) +  ( ( ((curr-'0')%MOD)  *  ( (ll)pow(10,index)%MOD )  ) % MOD) %MOD )%MOD ; 
                    }
                    prev = curr;
                    i++;
                    index--;
                }while( i <= n-1 );
            }         
            cout<<currentsum<<"\n";
            sum = ((sum%MOD) +  (currentsum%MOD) )% MOD;
        }
        cout<<sum%MOD<<"\n";
	}
	return 0;
}