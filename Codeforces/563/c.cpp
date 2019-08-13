    #include<bits/stdc++.h>
    #define ll long long int 
    #define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    using namespace std;

    int main()
    {
        bolt;
        ll n;
        cin>>n; 
        ll count = 2;
        for(ll i=2;i<=n;i++){
            if( i & 1){
                cout<< count++ <<" ";
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<"\n";
        return 0;
    }