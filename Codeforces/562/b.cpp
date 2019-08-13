#include<bits/stdc++.h>
#include<cmath>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll k;
	cin>>k;
	string s1 = "aeiou";	
	string s2 = "uaeio";	
	string s3 = "ouaei";	
	string s4 = "iouae";	
	string s5 = "eioua";	

	if( k < 25 )
		cout<<"-1\n";
	else{
		ll n,m;
		if( k %5==0 ){
			m = 5;
			n = (k /5)-5;
			cout<<s1<<s2<<s3<<s4<<s5;
			for( ll i = 0;i< n;i++ )
				cout<<s1;

			cout<<"\n";
		}
		else{
			n = sqrt(k);
			m = (k / n);
			if( n * m != k )
				cout<<"-1\n";
			else{
				n -= 5;
				m -= 5;
				
				cout<<s1;
				for( ll i=0;i<m;i++){
					cout<<s1[i];
				}	
				cout<<s2;
				for( ll i=0;i<m;i++){
					cout<<s2[i];
				}	
				cout<<s3;
				for( ll i=0;i<m;i++){
					cout<<s3[i];
				}	
				cout<<s4;
				for( ll i=0;i<m;i++){
					cout<<s4[i];
				}	
				cout<<s5;
				for( ll i=0;i<m;i++){
					cout<<s5[i];
				}	

				for(ll i=0;i<n;i++){
					cout<<s1;
					for(ll j=0;j<m;j++){
						cout<<s1[i];
					}				
				}
				cout<<"\n";
			}

		}

	}

	return 0;
}