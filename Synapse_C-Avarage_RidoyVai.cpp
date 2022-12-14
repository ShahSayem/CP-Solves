#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Fast_Input ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
int main()
{
    int t, ca=0;
    cin >> t;

    while(t--)
    {
        int n; cin >> n;

        string s;
        int cnt = 0, sum =0;

        while(n--){
            cin >> s;

            int num = 0;
            if(s[s.size()-1]!='*'){
                cnt++;

                for(int i=0;i<s.size();i++){
                    num=(num*10)+(s[i]-'0');
                }
            }
            else{
                for(int i=0;i<s.size()-1;i++){
                    num=(num*10)+(s[i]-'0');
                }
            }

            sum+=num;
        }

        if(cnt!=0)cout << "Case " << ++ca << ": " << (double)sum/cnt << "\n";
        else cout << "Case " << ++ca << ": -1\n";
    }
    return 0;
}