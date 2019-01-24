#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int ones = 0;
    int zeros = 0;
    int index_first_0 = -1;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            ones++;
        }else{
            zeros++;
        }
        if(index_first_0 == -1 && x==0){
            index_first_0 = i;
        }
        arr.push_back(x);
    }
    int curr_max = 0;
    int maxi = 0;
    for(int i = index_first_0;i<n;i++){
        if(arr[i]==0){
            curr_max++;
        }else{
            curr_max--;
        }
        maxi = max(maxi, curr_max);
        if(curr_max ==-1){
            while(arr[i]!=0){
                i++;
            }
            i = i-1;
            curr_max = 0;
        }
        
    }
    if(zeros == 0){
        cout<<n-1<<endl;
        return;    
    }
    else{
        cout<<ones+maxi<<endl;
    }
    return 0;
}