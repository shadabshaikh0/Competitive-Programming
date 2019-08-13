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
        vector<ll> v(2*n);
        unordered_map<ll,ll> mp;

        for(ll i =0;i<2*n;i++){
            cin>>v[i];
            mp[ v[i] ]++;
        }
        sort(v.begin(),v.end());
        if( mp.size() == 1 ){
            cout<<-1<<"\n";
        }
        else{
            for(ll i =0;i<2*n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }