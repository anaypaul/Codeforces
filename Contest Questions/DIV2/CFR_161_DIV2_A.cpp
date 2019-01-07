#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[5][5];
    int index_x,index_y;
    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            int x;
            cin>>x;
            arr[i][j] = x;
            if(arr[i][j] == 1){
                index_x = i;
                index_y = j;
            }
        }
    }
    int ans = abs(2-index_x) + abs(2-index_y);
    cout<<ans<<endl;
    return 0;
}