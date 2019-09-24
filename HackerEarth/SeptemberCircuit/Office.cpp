#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll distance;
    cin>>distance;

    ll Oa,Ob,Oc;
    cin>>Oa>>Ob>>Oc;

    ll Ca,Cb,Cc,Cd;
    cin>>Ca>>Cb>>Cc>>Cd;

    ll onlinedistance = distance - Ob;
    ll onlineprice = 0,classicprice =0;
    onlineprice += Oa;

    onlineprice += ( onlinedistance * Oc );

    classicprice += Cb;
    classicprice += ( distance/Ca * Cc);
    classicprice +=  distance * Cd;

    if( onlineprice <= classicprice ){
        cout<<"Online Taxi\n";
    }
    else{
        cout<<"Classic Taxi\n";
    }
	return 0;
}