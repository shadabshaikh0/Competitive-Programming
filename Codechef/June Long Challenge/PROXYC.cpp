    #include<bits/stdc++.h>
    #define ll long long int 
    #define ld long double
    #define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    using namespace std;

    int main()
    {
        bolt;

        ld seventy_five = 75;
        ll t;
        cin>>t;
        while(t--){
            ll d;
            cin>>d;
            string s;
            cin>>s;
            ll stringlength = s.length();

            ll absent = 0, present = 0,proxy = 0;
            bool pass = false;
            for( ll i = 0 ; i < stringlength ; i++  ){
                if( s[i] == 'A' )
                    absent++;
                else
                    present++;
            }

            ld percentage =  (ld)present* (ld) 100/ (ld) d;

            if( percentage >= seventy_five ){
                pass = true;
            }


            ll i;
            for( i = 2 ; i < stringlength-2 && !pass ; i++  ){
                if( s[i] == 'A' ){
                    
                    bool prev = ( s[i-1] == 'P' || s[i-2] == 'P' ); 
                    bool next = ( s[i+1] == 'P' || s[i+2] == 'P' ); 

                    if( prev && next  ){
                        present++;
                        proxy++;
                    }

                    percentage =  (ld)present* (ld) 100/ (ld) d;
                    if( percentage >= seventy_five ){
                        pass = true;
                    }
                }
            }

            if(pass)
                cout<<proxy<<"\n";
            else
                cout<<"-1"<<"\n";

        }
        return 0;
    }