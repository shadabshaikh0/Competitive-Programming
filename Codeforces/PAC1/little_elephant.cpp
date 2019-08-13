#include<bits/stdc++.h>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n;
    cin>>n;
    vector<ll> v(n),s(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        s[i]= v[i]; 
    }
    sort(v.begin(),v.end());    
    ll count =0;
    for( ll i=0;i<n;i++ ){
        if(s[i] != v[i] )
            count++;        
    }
    if(count <=2 )
        cout<<"YES\n";
    else
        cout<<"NO\n";
	return 0;
}