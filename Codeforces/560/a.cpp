    #include<bits/stdc++.h>
    #define ll long long int 
    #define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
    #define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    using namespace std;

    int main()
    {
        bolt;
        ll n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        string temp;
        temp += "1";
        for(ll i=1;i<=x;i++){
            temp += "0";
        }
        
        temp[x-y] = '1';

        ll j= 0;
        ll cnt = 0;
        for( ll i =n-x-1;i<n;i++){
            if( s[i] != temp[j++]  )
                cnt++;
        }
        cout<<cnt<<"\n";
        return 0;
    }