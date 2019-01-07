#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    int answer;
    for(int i = 0; i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int min_index = 0;
    int max_index = 0;
    for(int i = 0;i<n;i++){
        if(arr[max_index] < arr[i]){
            max_index = i;
        }
        if(arr[min_index] >= arr[i]){
            min_index = i;
        }
    }
    if(max_index > min_index){
        answer = max_index + (n-1)-min_index;
        cout<<answer-1<<endl;
    }else{
        answer = max_index + (n-1)-min_index;
        cout<<answer<<endl;
    }
    return 0;
}