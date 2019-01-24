#include<set>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
arr.push_back(3);
arr.push_back(1);
arr.push_back(6);
arr.push_back(3);
    set<int> s;
    for(int i = 0;i<arr.size();i++){
        if(i==0){
            s.insert(arr[i]);
        }
        else{
            if(s.find(arr[i]) == s.end()){
                cout<<"new"<<endl;
            }else{
                cout<<"old"<<endl;
            }
        }
    }
    return 0;
}