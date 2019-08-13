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
        vector<ll> v(n);
            
        bool a = false,b= false;
        for(ll i =0;i<n;i++){
            cin>>v[i];
            if( v[i] & 1 ){
                a = true;
            }
            else{
                b= true;
            }
        }
        if( a & b )
        {
            sort(v.begin(),v.end());
            for(ll i =0;i<n;i++){
                cout<<v[i]<<" ";
            }            
        }
        else{
            for(ll i =0;i<n;i++){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
        return 0;
    }