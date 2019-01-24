#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> hash(129,0);
    string s1;
    getline(cin, s1);  
    for(int i = 0;i<s1.length();i++){
        if(s1[i]!=' '){
        hash[s1[i]]++;
        }
    }
    string s2;
    getline(cin, s2);
    vector<int> hash2(129,0);
    for(int i =0;i<s2.length();i++){
        if(s2[i]!=' '){
        hash2[s2[i]]++;
        }
    }
    for(int i = 0; i<hash.size(); i++){
        if(hash[i]< hash2[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}