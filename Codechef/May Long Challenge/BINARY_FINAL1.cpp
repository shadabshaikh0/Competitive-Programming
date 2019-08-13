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

        ll oc = 0;
        for(ll i =0;i<n;i++ ){
            cin>>a[i];
            if( a[i] == 1 ){
                oc++;
            }
        } 

        ll last = n-1;
        for( ll i=0;i<n;i++){
            if( a[i] == 0 ){
                ll cc =0;
                for(ll k = i+1;k<=i+z && k < n ;k++){
                    if( a[k] == 0 ){
                        cc++;
                    }
                    else{
                        break;
                    }
                }
                ll jump =i;
                if( cc >= z ){
                    ans[jump] = 0;
                }
                else{
                    if(jump+z-cc > n-1 )
                        ans[last--] = 0;
                    else
                        ans[jump+z-cc] = 0;
                }
            }
        }
        ll i;
        for( i =0;i<n;i++ ){
            if( ans[i] == -1){
                if( oc <=0 )
                    break;
                ans[i] = 1;
                oc--;
            }
        }

        for( ll k=i;k<n;k++ ){
            if( ans[k] == -1){
                ans[k] = 0;
            }
        }

        for(auto &i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
	}
	return 0;
}