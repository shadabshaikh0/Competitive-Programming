#include<bits/stdc++.h>
#define ll unsigned long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main() 
{ 
    bolt;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> vec(n);
        RD(vec,n);
        for(int i=1;i<n;i++)
        {
            vec[i] += vec[i-1];
        }
        ll speed;
        cin>>speed;

        if(n == 1){
            cout<<"1 0\n";
        } 
        else{
            ll tempans=vec[n-1];
            ll finalans,remainingans,currentans,previousans;
            for(int i=0;i<n;i++)
            {
                previousans = vec[i-1];
                currentans = vec[i];
                remainingans = tempans-currentans;
                ll calculate = remainingans*speed;
                if( calculate <= vec[i])
                {
                    finalans=i;
                    break;
                }
            }
            previousans = vec[finalans-1];

            currentans = vec[finalans];

            remainingans = tempans-currentans;

            ll calculate1 = remainingans*speed; 
            if(previousans > calculate1 ){
                finalans--;
            } 
            if( previousans == calculate1 ) {
                if( finalans <  n-finalans-1 ){
                    finalans--; 
                } 
            }
            if(finalans == n-1){
                cout<<n-1<<" "<<"1\n";
            } 
            else{
                cout<<finalans+1<<" "<<n-finalans-1<<"\n";
            } 
        }
    }
}