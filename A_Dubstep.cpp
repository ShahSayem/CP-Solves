#include<iostream>
using namespace  std;

int main()
{
    string s;
    cin>>s;
    int count = 0;
    bool print1 = false;
    for(int i = 0; i < s.size(); i++){
           if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
                count= 1;
                i=i+2;
            }
            else{
                if(count && print1){
                    cout<<" ";
                    count = 0;
                }
            cout<<s[i];
            print1 = true;
            count = 0;
            }
    }
    return 0;
}
