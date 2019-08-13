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
		vector<ll> v(n),temp(n);

        ll maxe = LONG_MIN;
        for(ll i =0;i<n;i++ ) {
            cin>>v[i];
            if( maxe < v[i] )
                maxe = v[i];
            temp[i] = v[i];
        } 
        
        if( n == 2 ){
            cout<<v[0]+v[1]<<"\n";
        }
        else{
            v.erase(remove(v.begin(), v.end(), maxe), v.end());        
            ll gcd = v[0];        
            for(ll i =1;i<n;i++ ) {
                gcd = __gcd(gcd,v[i]);
            }
            ll first = gcd + maxe;

            ll maxee = *max_element(v.begin(),v.end());

            temp.erase(remove(temp.begin(), temp.end(), maxee), temp.end());        

            gcd = temp[0];        
            for(ll i =1;i<n;i++ ) {
                gcd = __gcd(gcd,temp[i]);
            }
            ll second = gcd + maxee;
            cout<< max(first,second)<<"\n";

        }
	}  
	return 0;
}