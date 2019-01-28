#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i==j){
                cout<< k-n+1<<" ";
            }else{
                cout<<1<< " ";
            }
        }
        cout<<endl;
    }
    return 0;
}