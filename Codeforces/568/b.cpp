#include<bits/stdc++.h>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;  

    ll n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        map<char,ll> mp1;
        map<char,ll> mp2;
        ll n = a.length();
        ll m = b.length();

        // for(ll i = 0;i<n;i++){
        //     mp1[ a[i] ]++;
        // }
        // for(ll i = 0;i<m;i++){
        //     mp2[ b[i] ]++;
        // }


        // if( mp1.size() != mp2.size()  ){
        //     cout<<"NO\n";
        // }
        // else{
        //     auto it1 = mp1.begin();
        //     auto it2 = mp2.begin();
        //     bool flag = true;
        //     while( (it1 != mp1.end() ) && (it2 != mp2.end() )  ){
        //         auto temp1 = *it1;
        //         auto temp2 = *it2;
        //         if( temp1.first != temp2.first ){
        //             flag = false;
        //             break;
        //         }                                                
        //         else{
        //             if( temp1.second > temp2.second  ){
        //                 flag = false;
        //                 break;
        //             }
        //         }
        //         it1++;
        //         it2++;
        //     }
        //     if( flag )
        //         cout<<"YES\n";
        //     else
        //         cout<<"NO\n";
        // }


    }

	return 0;
}