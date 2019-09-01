#include <bits/stdc++.h> 
using namespace std; 
#define ll unsigned long long int
int main() 
{ 
    ll t;
    cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;
        ll ans = 0;

        ll temp =m;
        for (ll i = 0; i < 10; i++) 
        {
            ans+= temp%10;
            temp +=m;
        }
        temp -= m;

        ll div =n/temp;
        ans  *= div;
        div =n-(temp *div);
        div=div/m;
        temp=m;
        for (ll i = 0; i < div; i++) 
        {
            ans += temp%10;
            temp += m;
        }
        cout<<ans<<"\n";
    }
}