#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr(999999,0);
    arr[0] = 0;
    arr[1] = 1;
    int index;
    for(int i = 2;i<999999;i++){
        arr[i] = arr[i-1] + arr[i-2];
        if(arr[i]==n){
            index = i;
            break;
        }
    }
    if(index-4 >=0){
        cout<<arr[index-4]<<" "<<arr[index-3]<<" "<<arr[index-1]<<endl;
    }else{
        if(n==3){
            cout<<"1"<<" "<<"1"<<" "<<"1"<<endl;
        }else if(n==2){
            cout<<"0"<<" "<<"1"<<" "<<"1"<<endl;
        }else if(n==1){
            cout<<"0"<<" "<<"0"<<" "<<"1"<<endl;
        }else if(n==0){
            cout<<"0"<<" "<<"0"<<" "<<"0"<<endl;
        }else{
            cout<<"I'm too stupid to solve this problem"<<endl;
        }
    }
    return 0;
}
