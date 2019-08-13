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
        ll n = a.length();
        ll m = b.length();
        if( n > m ){
            cout<<"NO\n";
        }
        else{
            deque<char> dq1;
            deque<char> dq2;
            for( ll i=0;i<n;i++ ){
                dq1.push_back(a[i]);
            }
            for( ll i=0;i<m;i++ ){
                dq2.push_back(b[i]);
            }
            bool flag = true;
            char prev = dq1.front();
            while( !dq1.empty() && !dq2.empty() ){
                char p1 = dq1.front();                
                char p2 = dq2.front();

                if( p1 == p2 ){
                    prev = dq1.front();
                    dq1.pop_front();
                    dq2.pop_front();
                }
                else{                    
                    if( dq2.front() != prev ){
                        flag = false;
                        break;
                    }
                    else{
                        while( !dq2.empty() &&  (dq2.front() == prev) ){
                            dq2.pop_front();
                        }
                    }
                }
            }

            while( !dq2.empty() &&  prev == dq2.front()){
                dq2.pop_front();
            }

            if( !flag  )
                cout<<"NO\n";
            else{
                if( dq2.empty() && !dq1.empty() )
                    cout<<"NO\n";
                else if( !dq2.empty() && dq1.empty() )
                    cout<<"NO\n";
                else
                    cout<<"YES\n";
            }

        }

    }

	return 0;
}