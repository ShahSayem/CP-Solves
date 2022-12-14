#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        long long n;
        cin>>n;

        vector <long long> vec;
        for (int i = 0; i < n; i++){
            long long j;
            cin>>j;
            vec.push_back(j);
        }
        
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());

        if (n == 1){
            if(vec[0] == 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            long long m = vec[0];
            
            if(m-1 > vec[1]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    
    return 0;
} 