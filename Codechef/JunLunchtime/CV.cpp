#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll count = 0;
        unordered_map<char,ll> mp;
        mp['a']=1;
        mp['e']=1;
        mp['i']=1;
        mp['o']=1;
        mp['u']=1;
        
        for (ll i = 0; i < n-1;) {
            if( !mp.count( s[i] ) ){
                if( mp.count(s[i+1]) ){
                    count++;                    
                    i++;
                }
                i++;
            }
            else{
                i++;
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}
