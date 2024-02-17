#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        
        vector <int> vec;
        for (int i = 0; i < 4; i++){
            int j;
            cin>>j;
            vec.push_back(j);
        }

        if((vec[0] == vec[2] || vec[0] == vec[3]) && (vec[1] == vec[2] || vec[1] == vec[3])){
            cout<<0<<endl;
        }
        else if((vec[0] == vec[2] || vec[0] == vec[3]) || (vec[1] == vec[2] || vec[1] == vec[3])){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
        
    }
    
    return 0;
}
