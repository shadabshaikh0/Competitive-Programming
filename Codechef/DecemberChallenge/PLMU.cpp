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
        ll count1 = 0,count2 = 0;
        ll x;
        for( ll i=0;i<n;i++ ){
            cin>>x;
            if( x == 2 )    count1++;
            else if( x == 0 )    count2++;

        }
        cout<< ( count1 * ( count1 - 1)/2 ) + ( count2 * ( count2 - 1)/2 )<<"\n";
	}
	return 0;
}