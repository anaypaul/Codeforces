#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(65<= s[0] && s[0] <= 90){
        cout<<s<<endl;
    }else{
        s[0] = s[0] - 'A' + 33;
        cout<<s<<endl;
    }
    return 0;
}