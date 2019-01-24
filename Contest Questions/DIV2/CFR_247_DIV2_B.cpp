#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int getSum(vector<int> arr, int g[5][5]){
    return (g[arr[3]][arr[4]] + g[arr[4]][arr[3]] + g[arr[2]][arr[3]] + g[arr[3]][arr[2]])*2 + g[arr[1]][arr[2]] +g[arr[2]][arr[1]] + g[arr[1]][arr[0]] + g[arr[0]][arr[1]];
}
int main(){
    vector<int> arr;
    for(int i = 0;i<5;i++){
        arr.push_back(i);
    }
    int g[5][5];
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin>>g[i][j];
        }
    }
    long long int max = -1;
    do{
        int x = getSum(arr,g);
        if(max < x){
            max = x;
        }
    }while(next_permutation(arr.begin(),arr.end()));
    cout<<max<<endl;
    return 0;
}