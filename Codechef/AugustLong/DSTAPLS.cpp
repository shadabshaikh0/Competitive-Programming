#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int; 
#define ll long long int    
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		cpp_int n,k;
		cin>>n>>k;
        if( (n % (k*k) )  == 0  )
            cout<<"NO\n";
        else
            cout<<"YES\n";
	}

	return 0;
}