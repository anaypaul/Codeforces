#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    int n = s.length();
    for(int i=0;i<n;){
        if(i+2<n && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i = i + 3;
            continue;
        }else if(i+1<n && s[i]=='1' && s[i+1]=='4'){
            i = i + 2;
            continue;
        }else if(i<n && s[i]=='1'){
            i = i + 1;
            continue;
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}