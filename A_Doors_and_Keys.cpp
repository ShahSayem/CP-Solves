#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        int count = 0;

        for (int i = 1; i < s.size(); i++){
            if(s[i] <= 'Z'){
                for (int j = i-1; j >= 0; j--){
                    if(s[i]+32 ==  s[j]){
                        count++;
                        break;
                    }
                }
            }
                
        }
            
        if(count >= 3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
           
    }

    return 0;
}