#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int main(){
//     vector<int> ans;
//     int y,k,n;
//     cin>>y>>k>>n;
//     int f = 0;
//     for(int i = 1;y+i<=n;i++){
//         if((y+i)%k == 0){
//             ans.push_back(i);
//             f = 1;
//             break;
//         }
//     }
//     if(f == 1){
//         int x = ans[0]+y;
//         int j = (ans[0]+y)/k;
//         j++;
//         while(k*j <=n){
//             ans.push_back(k*j-y);
//             j++;
//         }
//     }
//     if(ans.size()>=1){
//         for(std::vector<int>::iterator iter = ans.begin();iter != ans.end();iter++){
//             cout<<*iter<<" ";
//         }
//     }else{
//         cout<<"-1"<<endl;
//     }
//     return 0;
// }

int main(){
    vector<int> ans;
    int y,k,n;
    cin>>y>>k>>n;
    int start = y/k;
    int end = n/k;
    for(int i = start+1;i<=end;i++){
        ans.push_back(i*k - y);
    }
    if(ans.size()==0){
        cout<<"-1"<<endl;
    }else{
        for(int x:ans){
            cout<<x<<" ";
        }
    }
    return 0;
}