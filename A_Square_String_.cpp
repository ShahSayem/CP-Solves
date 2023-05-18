#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int sum1 = 0;
        int sum2 = 0;

        if ((s.size()) % 2 != 0){
            cout<<"NO"<<endl;
        }
        else {
            for (int i = 0; i < ((s.size()) / 2); i++){
                    sum1 = (sum1*10)+(s[i]-'0'); 
                }
            for (int i = ((s.size()) / 2); i < s.size(); i++){
                    sum2 = (sum2*10)+(s[i]-'0');
                }
            
            if (sum1 == sum2){
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}