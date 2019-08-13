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
    vector<ll> v(n),count;
    RD(v,n);	

    ll prev  = v[0];
    ll cnt  =1;
    for( ll i=1;i<n;i++ ){
        if( prev == v[i] ){
            cnt++;
        }
        else{
            prev = v[i];
            count.emplace_back(cnt);
            cnt =1;
        }
    }
    count.emplace_back(cnt);

    if( count.size() == n )
        cout<<n<<"\n";
    else{

        ll cn = count.size();
        ll prev = count[0];
        ll temp = prev;
        ll i;
        for( i =1 ;i<cn;i++ ){
            if( prev != count[i] )
                break;
            else{
                temp += count[i];
            }
        }
        if( i == cn ){
            temp -= count[cn-1];
            temp++;
        }
        cout<<temp<<"\n";
    }
	return 0;
}