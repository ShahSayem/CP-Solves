#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        int n, count1;
        count1 = 0;
        cin>>n;

        vector <long long > vec;
        for (int i = 0; i < n; i++){
            int j;
            cin>>j;
            vec.push_back(j);
            if( i > 0){
                if(vec[i]%2 == vec[i-1]%2){
                    count1++;
                }
            }
        }

        bool check = false;
        if (count1 == n-1){
            cout<<"YES"<<endl;
        }
        else {
            for (int i = 0; i < n-2; i++){
                if((vec[i]%2 != vec[i+1]%2) && (vec[i]%2 == vec[i+2]%2)){
                    continue;
                }
                else{
                    check = true;
                    break;
                }
            }
            
            if(check){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }  
    }

    return 0;
}
    