#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[26] = {0};
    for(int i=0;i<s.length();i++){
        if('a' <= s[i] && s[i]<='z'){
            arr[(int)s[i]-'a']++;
        }
    }
    int num = 0;
    for(int i = 0;i<26;i++){
        if(arr[i]>=1){
            num++;
        }
    }
    if(num%2==1){
        cout<<"IGNORE HIM!"<<endl;
    }else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}