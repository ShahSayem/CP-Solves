#include <bits/stdc++.h>
#include <set>
using namespace std;

int dist (char* a, int len)
{
    set <int> s;
    for (int i = 0; i < len; i++){
        s.insert(a[i]);
    }

    int ans = s.size();

    return ans;
}

int main()
{
    char a[100];
    for (int i = 0; i < 100; i++)
    {
        cin>>a;
    }

    // set <string> a;
    // for(int i = 0; i < 100; i++){
    //     a.insert(s[i]);
    // }
    int n = strlen(a);
    int x = dist(a, n);

    if(x%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}