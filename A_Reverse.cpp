#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        int a[n];
        string s1, s2;

        for (int i = 0; i < n; i++){
            cin>>a[i];
            s1[i] = to_string(a[i]);
            s1[i] = s2[i];
        }

        bool sa = false;
        for (int i = 0; i < n-1; i++){
            if(!sa){
                swap(s2[i], s2[i+1]);
                int c = s1.compare(s2);
                if (c > 0){
                    for (int i = 0; i < n; i++){
                        cout<<s2[i]<<" ";
                    }
                    sa = true;
                }
            }
            break;
            
        }
        
        
    }

    return 0;
}