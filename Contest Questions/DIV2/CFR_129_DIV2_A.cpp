#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int index = 0;
    vector<int> arr;
    int x;
    cin>>x;
    arr.push_back(x);
    index = 0;
    for(int i = 1;i<n;i++){
        cin>>x;
        arr.push_back(x);
        if(arr[index] >= arr[i]){
            index = i;
        }
    }
    int val= arr[index];
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==val){
            count++;
        }
    }
    if(count==1){
        cout<<index+1<<endl;
    }else{
        cout<<"Still Rozdil"<<endl;
    }
    return 0;
}
