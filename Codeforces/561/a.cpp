    #include<bits/stdc++.h>
    #define ll long long int 
    #define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
    #define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    using namespace std;

    int main()
    {
        bolt;
        ll n;
        cin>>n;
        unordered_map<char,ll> mp;
        for(ll i =0;i<n;i++){
            string s;
            cin>>s;
            mp[s[0]]++;
        }

        ll count = 0;
        for(auto i:mp){
            ll value = i.second;
            ll a =  value /2;
            ll b =  value - a ;
            count += (a*(a-1)/2);
            count += (b*(b-1)/2);
        }
        cout<<count<<"\n";
        return 0;
    }