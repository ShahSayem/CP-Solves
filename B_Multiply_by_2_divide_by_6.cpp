#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;

        int count_2 = 0, count_3 = 0;
        while(!(n%2)){
            n /= 2;
            count_2++;
        }
        while(!(n%3)){
            n /= 3;
            count_3++;
        }    

        if(n != 1 || count_2 > count_3){
            cout<<-1<<endl;
        }
        else{
            cout<<(count_3-count_2)+count_3<<endl;
        }
    }

    return 0;
}