#include<iostream>
#include<algorithm>
#include<vector>
#define pb push_back
using namespace std;
//TLE Code on test case #27
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i = 0; i<n;i++){
//         int x;
//         cin>>x;
//         arr.pb(x);
//     }
//     sort(arr.begin(),arr.end());
//     vector<int> answer;
//     int flag = 0;
//     int group = 0;
//     for(int i = 0;i<=n-3;i++){
//         if(arr[i] != -1){
//             cout<<"******pushing into group "<<group<<" : ";
//             answer.pb(arr[i]);cout<<"pushed "<<arr[i]<<endl;
//             int x = arr[i];
//             cout<<x<<" ";
//             arr[i] = -1;
//             int j = i+1;
//             int flag_j = 0;
//             while(x == arr[j] || arr[j]== -1){
//                 cout<<"moving forward"<<endl;
//                 j++;
//             }
//             cout<<"after covering same and -1"<<endl;
//             while(j<=n-2){
//                 cout<<"** "<<arr[j]<<"%"<<x<<"="<<arr[j]%x<<endl;
//                 if(arr[j]%x == 0 && arr[j]!=0){
//                     cout<<"flag_j = 1"<<endl;
//                     flag_j = 1;
//                     break;
//                 }
//                 j++;
//             }
//             if(flag_j == 1){
//                 cout<<arr[j]<<" ";
//                 x = arr[j];
//                 arr[j] = -1;
//                 answer.pb(x);cout<<"pushed "<<x<<endl;
//             }else{
//                 cout<<"final answer : -1"<<endl;
//                 return 0;
//             }
//             int k = j+1;
//             int flag_k = 0;
//             while(x== arr[k] || arr[k]== -1){
//                 cout<<"moving forward"<<endl;
//                 k++;
//             }
//             cout<<"after covering same and -1"<<endl;
//             while(k<=n-1){
//                 cout<<"** "<<arr[k]<<"%"<<x<<"="<<arr[k]%x<<endl;
//                 if(arr[k]%x == 0 && arr[k]!=0){
//                     cout<<"flag_k = 1"<<endl;
//                     flag_k = 1;
//                     break;
//                 }
//                 k++;
//             }
//             if(flag_k == 1){
//                 cout<<arr[k]<<" ";
//                 x = arr[k];
//                 arr[k] = -1;
//                 answer.pb(x);cout<<"pushed "<<x<<endl;
//             }else{
//                 cout<<"final answer : -1"<<endl;
//                 return 0;
//             }
//         }
       
//     }
//     cout<<endl;
//     for(int i = 0;i<n;i=i+3){
//         cout<<answer[i]<<" "<<answer[i+1]<<" "<<answer[i+2]<<endl;
//     }
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> hash(8,0);
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr.pb(x);
        hash[x]++;
        if(x==5 || x==7){
            cout<<"-1"<<endl;
            return 0;
        }
    }
    int x1 = hash[4];
    hash[1] -= x1;
    hash[2] -= x1;
    hash[4] -= x1;
    int x2 = hash[3];
    hash[1] -= x2;
    hash[3] -= x2;
    hash[6] -= x2;
    int x3 = hash[6];
    if(x3 <0){
        cout<<"-1"<<endl;
        return 0;
    }
    hash[6] -= x3;
    hash[2] -= x3;
    hash[1] -= x3;
    for(int i = 0;i<7;i++){
        if(hash[i]!=0){
            cout<<"-1"<<endl;
            return 0;
        }
    }
    for(int i = 0;i<x1;i++){
        cout<<"1 2 4"<<endl;
    }
    for(int i = 0; i<x2; i++){
        cout<<"1 3 6"<<endl;
    }
    for(int i = 0; i<x3;i++){
        cout<<"1 2 6"<<endl;
    }
    return 0;
}