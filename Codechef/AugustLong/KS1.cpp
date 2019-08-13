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
		vector<ll> v(n);
		RD(v,n);	

        vector<ll> prefixxor(n);
        prefixxor[0] = v[0];
        for(ll i=1;i<n;i++){
            prefixxor[i] = v[i] ^ prefixxor[i-1];
        }

        ll output = 0;

        unordered_map<ll,ll> mp1;
        unordered_map<ll,ll> mp2;
        unordered_map<ll,ll> mp3;

        mp1[0] = -1;
        mp3[0] = 1;

        for(ll i=0;i<n;i++){
            if( mp3.count( prefixxor[i] ) ){
                ll currentans  =  (  ( i - ( mp1[ prefixxor[i] ]+1 ) ) * mp3[prefixxor[i]]  ) + mp2[ prefixxor[i] ] + ( mp3[prefixxor[i]] -1 )  ;
                mp3[ prefixxor[i] ]++;
                mp2[ prefixxor[i] ] = currentans;
                output += currentans;
             }
            else{
                mp3[ prefixxor[i] ]++;
            }
            mp1[ prefixxor[i] ] = i;
        }
        cout<<output<<"\n";
    }
	return 0;
}