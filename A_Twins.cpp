#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n], ans = 0, remain = 0, count = 0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    sort(a, a+n);
    reverse(a, a+n);

    for (int i = 0; i < n; i++){
        remain = 0;
        ans += a[i];
        count++;
        
        for (int j = i+1; j < n; j++){
            remain += a[j];
        }
        if (ans > remain){
            cout<<count<<endl;
            return 0;
        }
         
    }
    
    
    return 0;
}