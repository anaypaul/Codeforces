#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(s1.length()!= s2.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    int hash[26] = {0};
    int diff = 0;
    int index1 = -1,index2=-1;
    for(int i = 0;i<s1.length();i++){
        if(s1[i] != s2[i]){
            diff++;
            if(diff == 1){
                index1 = i;
            }
            else if(diff ==2){
                index2 = i;
            }
            if(diff >=3){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    if(diff!=2){
        cout<<"NO"<<endl;
    }else{
        // cout<<index1<<" "<<index2<<endl;
        if(s1[index1]==s2[index2] && s1[index2]==s2[index1]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}