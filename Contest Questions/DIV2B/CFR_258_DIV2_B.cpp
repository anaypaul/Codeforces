#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSorted(vector<long long int> arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]<=arr[i]){
            continue;
        }else{
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<long long int> arr;
    int flips = 0;
    int start=1,end=1;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i = 1; i<n ; i++){
        if(arr[i-1]<=arr[i]){
            continue;
        }else{
            flips++;
            start = i-1;
            end = i-1;
            while(arr[end]>arr[end+1]){
                end++;
            }
            i = end;
        }
    }
    if(flips==0){
        cout<<"yes"<<endl;
        cout<<start<<" "<<end<<endl;
    }else if(flips<2){
        if(end==n){
            sort(arr.begin()+start,arr.begin()+end);
            if(isSorted(arr)){
                cout<<"yes"<<endl;
                cout<<start+1<<" "<<end<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }else{
            sort(arr.begin()+start,arr.begin()+end+1);
            if(isSorted(arr)){
                cout<<"yes"<<endl;
                cout<<start+1<<" "<<end+1<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}