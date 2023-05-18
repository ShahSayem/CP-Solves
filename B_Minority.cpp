#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin>>s;

        int count0 = 0, count1 = 0;

        for(int i = 0; i <s.size(); i++){
            if (s[i] == '1'){
                count1++;
            }
            else{
                count0++;
            }
        }

        if (s.size() >= 3 && count0 == count1){
            cout<<min(count1, count0)-1<<endl;
        }
        else if (s.size() == 1 || count0 == count1){
            cout<<0<<endl;
        }
        else{
            cout<<min(count1, count0)<<endl;
        }

    }
    return 0;
}