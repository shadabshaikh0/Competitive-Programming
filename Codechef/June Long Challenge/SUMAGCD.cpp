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
	while(t--){
		ll n;
		cin>>n;
        ll atemp = 0,btemp = 0;
		vector<ll> v(n),a,b;
		RD(v,n);	

        atemp = v[0];
        btemp = v[1];
        a.emplace_back(atemp);
        b.emplace_back(btemp);

        if( n == 2 ){
            cout<<v[0]+v[1]<<"\n";
        }
        else{
            for(ll i=2;i<n;i++){

                ll n1 =  __gcd( atemp,v[i] );  
                ll n2 =  __gcd( btemp,v[i] );
                ll n3=0,n4=0;
                if( a.size() == 1 ){
                    n3 = __gcd(btemp,atemp);
                    
                    
                    if( ( (n1+btemp) > (n2+atemp) ) && ( (n1+btemp) > (n3 + v[i] ) ) ){
                        a.emplace_back(v[i]);
                        atemp = n1;
                    }
                    else if( ( (n2+atemp) > (n1+btemp) ) && ( (n2+atemp) > (n3 + v[i] ) ) ){
                        b.emplace_back(v[i]);
                        btemp = n2;
                    }
                    else{
                        a.clear();
                        a.emplace_back(v[i]);
                        b.emplace_back(atemp);
                        atemp = v[i];
                        btemp = n3;
                    }

                }
                else if( b.size() == 1 ){
                    n3 = __gcd(atemp,btemp);   

                    if( ( (n1+btemp) > (n2+atemp) ) && ( (n1+btemp) > (n3 + v[i] ) ) ){
                        a.emplace_back(v[i]);
                        atemp = n1;
                   }
                    else if( ( (n2+atemp) > (n1+btemp) ) && ( (n2+atemp) > (n3 + v[i] ) ) ){
                        b.emplace_back(v[i]);
                        btemp = n2;
                    }
                    else{
                        b.clear();
                        b.emplace_back(v[i]);
                        a.emplace_back(btemp);
                        atemp = n3;
                        btemp = v[i];
                    }

                }
                else{
                    if( (n1+btemp)  > (n2+atemp) ){
                        a.emplace_back(v[i]);
                        atemp = n1;
                    }
                    else{
                        b.emplace_back(v[i]);
                        btemp = n2;
                    }
                }
            }   
            cout<<atemp+btemp<<"\n";
        }
	}
	return 0;
}