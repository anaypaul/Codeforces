#include<iostream>
using namespace std;
int main(){
    string guest,host,mixed;
    cin>>guest;
    cin>>host;
    cin>>mixed;
    int arr_org[26] = {0};
    
    for(int i=0;i<guest.length();i++){
        arr_org[guest[i]-'A']++;
    }
    for(int i=0;i<host.length();i++){
        arr_org[host[i]-'A']++;
    }
    for(int i =0;i<mixed.length();i++){
        arr_org[mixed[i]-'A']--;
    }
    for(int i =0;i<26;i++){
        if(arr_org[i]!=0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}