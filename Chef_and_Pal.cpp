#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;
        
        string num = "";
        if (n%2 == 0){
            for (int i = 0; i < n/2; i++){
                num += "01";
            }
            cout<<num<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}