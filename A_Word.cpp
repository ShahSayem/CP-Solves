#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int count_A = 0, count_a = 0;

    for (int i = 0; i < s.size(); i++){
        if(s[i] < 'a'){
            count_A++;
        }
        else{
            count_a++;
        }
    }
    
    if(count_A > count_a){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout<<s<<endl;
    
    return 0;
}