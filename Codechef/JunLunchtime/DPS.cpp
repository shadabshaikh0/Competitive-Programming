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
        string s;
        cin>>s;
        unordered_map<char,ll> mp;
        for(ll i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        ll count = 0;
        for(auto i:mp){
            if( i.second & 1 )
                count++;
        }
        if( count < 1 || count > 3 )
            cout<<"!DPS\n";
        else
            cout<<"DPS\n";
	}
	return 0;
}