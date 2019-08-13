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
    RD(v,n);
    bool flag = false;
    ll count = 0;

    if( n&1 )
        flag = true;
    else{
        sort(v.begin(),v.end());
        for(ll i=0;i<n-1;i+=2){
            if( v[i] == v[i+1] ){
            }
            else if( (v[i+1] -v[i]) == 1 )  {
                count++;
            }
            else{
                flag = true;
                break;
            }
        }            
    }
    if( flag || ( count&1 ) )
        cout<<"NO\n";
    else
        cout<<"YES\n";
	return 0;
}