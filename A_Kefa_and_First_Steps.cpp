#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n], count = 1, ans[n] = {0}, j = 0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(i > 0){
            if(a[i] >= a[i-1]){
                count++;
            }
            else{
                ans[j] = count;
                count = 1;
                j++;
            }
        }
        ans[j] = count;
    }

    int* x = max_element(ans, ans+n);
    cout<<*x<<endl;
    
    return 0;
}