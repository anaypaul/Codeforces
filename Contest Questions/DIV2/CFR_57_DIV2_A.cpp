#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string answer = "";
    for(int i = 0; i<s1.length();i++){
        if(s1[i]!=s2[i]){
            answer += "1";
        }else{
            answer += "0";
        }
    }
    cout<<answer<<endl;
    return 0;
}