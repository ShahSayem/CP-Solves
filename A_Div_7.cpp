#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        if (n%7 == 0){
            cout<<n<<endl;
        }
        else{

            int a = n%7;

            if ((n%10)+(7-a) < 10){
                cout<<n+(7-a)<<endl;
            }
            else {
                cout<<n-a<<endl;
            }
            
        }
    }
    return 0;
}