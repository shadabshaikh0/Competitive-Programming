#include<bits/stdc++.h>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
        ll a = max(n,m);
        ll b = min(n,m);
        if( a == b || a % b == 0 )
        {
            cout<<"Ari\n";
            continue;
        }

        ll div = a/b;
        if( div > 1  )
            cout<<"Ari\n";
        else{
            ll cnt  = 0;
            while( a % b != 0 ){
                cnt++;
                // cout<<cnt<<":\n";
                if( (a / b) > 1 ){                    
                    break;
                }
                else{
                    ll temp = b;
                    b = a % b;
                    a = temp;
                    // cout<<"a:"<<a<<" b:"<<b<<"\n";
                    if( (a / b) > 1 ){   
                        cnt++;                 
                        break;
                    }
                }
            }        

            if(cnt & 1)
                cout<<"Ari\n";
            else
                cout<<"Rich\n";
        }

    }
    return 0;
}
