#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t>0){
        for(int i = 0; i< s.length()-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                char t = s[i];
                s[i] = s[i+1];
                s[i+1] = t;
                i++;
            }
        }
        t--;
    }
    cout<<s<<endl;
    return 0;
}