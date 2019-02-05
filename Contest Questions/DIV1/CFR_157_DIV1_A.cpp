#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ones = 0;
    int zeros = 0;
    string ans = "";
    int contains_0 = 0;
    for(int j = 0;j<s.length();j++){
        if(s[j]=='0'){
            contains_0 = 1;
            break;
        }
    }
    int i=0;
    if(contains_0==0){
        i++;
    }
    
    for(;i<s.length();i++){
        if(s[i]=='1'){
            ans += '1';
        }else if(s[i]=='0'){
            i++;
            break;
        }
    }
    
    for(;i<s.length();i++){
        ans += s[i];
    }
    cout<<ans<<endl;
    return 0;
    return 0;
}