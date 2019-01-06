#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    string answer = "";
    for(int i = 0; i<s.length();i++){
        if(s[i]=='.'){
            answer += '0';
        }else if(s[i]=='-' && s[i+1]=='.'){
            answer += '1';
            i++;
        }else if(s[i]=='-' && s[i+1]=='-'){
            answer += '2';
            i++;
        }
    }
    cout<<answer<<endl;
    return 0;
}