#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n,z;
		cin>>n>>z;
		vector<ll> a(n),ans(n,-1);
        ll mine = 1;
        ll oc = 0;
        for(ll i =0;i<n;i++ ){
            cin>>a[i];
            if( a[i] == 1 ){
                oc++;
            }
        } 

        if( oc <= n - oc  )
            mine = 1;
        else
            mine = 0; 

        ll pos = n-1;
        if( mine == 0 ){
            for( ll i=n-1;i>=0;i-- ){   
                if( a[i] == 0 ){
                    if( i+z > n-1 ){
                        ans[pos] = 0;
                        pos--;
                    }
                    else{
                        ll conscont = 0;
                        for( ll k=i;k<i+z && k < n;){
                            if( k < n )
                                k++;
                            else
                                continue;

                            if( a[k] == 0)
                                conscont++;
                            else
                                break;
                        }             
                        ll jump = i;
                        if(conscont >= z){
                            ans[jump] = 0;                            
                        }
                        else{
                            jump += (z - conscont);
                            while( ans[jump] != -1 ){
                                jump--;
                            }
                            ans[jump] = 0;
                        }

                    }
                }
            }
            for( ll i=0;i<n;i++ ){   
                if( ans[i] == -1 )
                    ans[i] =  1;
            }   

        }
        else{
            pos = 0;
            for( ll i=0;i<n;i++ ){
                if( a[i] == 1 ){
                    if( i-z < 0 ){
                        ans[pos] = 1;
                        pos++;
                    }
                    else{
                        ll conscont = 0;
                        for( ll k=i;k > i-z && k >= 0;){
                            if( k >= 0 )
                                k--;
                            else
                                continue;

                            if( a[k] == 1)
                                conscont++;
                            else
                                break;
                        }             
                        ll jump = i;
                        if(conscont >= z){
                            ans[jump] = 1;                            
                        }
                        else{
                            jump -=  ( z - conscont);
                            while( ans[jump] != -1 ){
                                jump++;
                            }
                            ans[jump] = 1;
                        }

                    }
                }                
            }
            for( ll i=0;i<n;i++ ){   
                if( ans[i] == -1 )
                    ans[i] =  0;
            }   
        }

        for(auto &i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
	}
	return 0;
}