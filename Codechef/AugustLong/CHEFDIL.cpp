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
        string s;
        cin>>s;
        ll zc = 0,oc=0,n=s.length();
        for(ll i=0;i<n;i++){
            if( s[i] == '1' )
                oc++;
            else
                zc++;
        }

        if( (zc & 1 )  && (oc & 1)   ){
            cout<<"WIN\n";
        }
        else if( !(zc & 1 )  && (oc & 1)   ){
            cout<<"WIN\n";
        }
        else{
            cout<<"LOSE\n";
        }
        

	}
	return 0;
}