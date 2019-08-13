#include<bits/stdc++.h>
#define ll int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    unordered_map<string,ll> mp;
    string s;
    ll n;
    cin>>n;
    while(n--){
        cin>>s;
        mp[s]++;
    }
    
    for(auto &i: v){
        cout<<i<<""
    }
    cout<<"\n";
    return 0;
}
