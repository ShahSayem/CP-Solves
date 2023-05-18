#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count = 0;
        int run = 0;
        int sum = 0;

        while(n--){
            string r;
            cin>>r;

            int l = r.size();

            int nout = int(r[l-1]);

            if (nout == '*'){
                count++;
                int k = 1;
                for (int i = l-2; i>=0; i--){
                    run = int(r[i]-'0') * k;
                    run += run;
                    k *= 10; 
                }
            }  
            else {
                int k = 1;
                for (int i = l-1; i>=0; i--){
                    run = int(r[i]-'0') * k;
                    run += run;
                    k *= 10; 
                }
            }
            sum+=run;
             
        }
        int zero_ans = n-count;
        if (zero_ans == 0){
            cout<<-1<<endl;
        }
        else {
            cout<<sum/count<<endl;
        }
    }
    
    return 0;
}