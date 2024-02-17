#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {6, 1, 9, 3, 8};

    sort(arr+1, arr+4);

    for (int i = 0; i < 5; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
    sort(arr, arr+5);

    for (int i = 0; i < 5; i++) {
        cout<<arr[i]<<"\t";
    }
    return 0;
} 