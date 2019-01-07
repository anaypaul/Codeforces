#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        vector<int> arr(n+1);
        arr[0] = 0;
        for(int i = 1;i<n+1;i++){
            if(i%2==1){
                arr[i] = i+1;
            }else{
                arr[i] = i -1;
            }
        }
        for(int i = 1;i<n+1;i++){
            cout<<arr[i]<<" ";
        }
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}