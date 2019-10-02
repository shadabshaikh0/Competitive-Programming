#include<bits/stdc++.h>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define forr(i,a,b) for( int i=(a) ; i<=(b) ; ++i)

#define MAX 1600001
vector<bool> prime(MAX,false);
void sieve(){
    ll i,j;
    forr( i,2,MAX ){
        if( !prime[i] ){
            for( ll j=2*i;j<=MAX;j+=i ){
                prime[j] = true;
            }
        }
    }
}
ll first(ll n,ll next)
{
    ll ans =0;
    bool flag = false;
    for( ll i=n+1;i<next;i++ ){
        if( !prime[i]  ){
            ans = i;
            flag =true;
            break;
        }
    }
    if(!flag)
        ans = -1;
    return ans;
}
ll second(ll n,ll next)
{   
    ll ans =0;
    bool flag = false;
    for( ll i= next+1;i<next*2;i++){
        if( !prime[i] ){
            ans = i;
            flag = true;
            break;
        }
    } 
    if(!flag)
        ans = -1;
    return ans;
}
ll third(ll n,ll next)
{
    if(n+1 == next) 
        return -1;
    else if(!prime[n+1]) {
        if(n+2==next) 
            return -1;
        else 
            return n+2;
    }
    else 
        return n+1;
}
int main()
{
    sieve();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if( n == 1 ){
            cout<<"-1 2 -1 4\n";
        }
        else{
            ll next = pow(2,ceil(log2(n)));
            if(next == n) 
                next *= 2;
            cout<<first(n,next)<<" "<<second(n,next)<<" "<<third(n,next)<<" "<<next<<"\n";
        }
    }
}