#include <bits/stdc++.h>
using namespace std;


int main()
{
    int sum = 0, step = 0, i = 0;
    int arr[] = {2, 3, 5, 10, 20, 40, 80, 160, 320, 640, 1280, 2560};

    sum = arr[0] + arr[1]; //5
    i = 2;
    step++;

    while (sum < 2560){
        sum += arr[i];


        i++;
        step++;
    }

    cout<<step<<"\n";

    return 0;
}
