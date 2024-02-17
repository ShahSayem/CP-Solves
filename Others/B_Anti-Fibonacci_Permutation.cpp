#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        vector <int> vec;

        while(n--){
            for (int i = 1; i <= n; i++){
                vec.push_back(i);
                cout<<vec[i-1]<<" ";
            }
    
            for (int i = 1; i <= n; i++){
                vec.push_back(i);
            }
        }
            
           
    }

    return 0;
}