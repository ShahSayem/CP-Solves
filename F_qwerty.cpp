#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[26];

    for(int i = 0; i < 26; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < 26; i++) {
        printf("%c",a[i]+96);
    }
    return 0;
}