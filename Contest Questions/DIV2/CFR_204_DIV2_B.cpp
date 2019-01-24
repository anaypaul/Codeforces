#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

// int main(){
//     vector<pair<int,int> >answer;
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i =0; i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     for(int i = 0; i<n;i++){
//         if(arr[i]!=-1){
//             int x = arr[i];
//             int j = i+1;
//             int diff = 1;
//             if(j<n-1){
//                 while(j<n && arr[j]!=x){
//                     j++;
//                     diff++;
//                     if(j==n){
//                         diff = 0;
//                     }
//                 }
//             }else{
//                 diff = 0; 
//             }
//             //check if current element's position is in AP or not and set then to -1
//             cout<<"current item :"<<x<<" common difference :"<<diff<<endl;
//             vector<int> position;
//             int flag = 1;
//             for(int index = 0;index<n;index++){
//                 if(x==arr[index]){
//                     position.push_back(index);
//                 }
//             }
//             cout<<"printing all positions"<<endl;
//             for(int pp : position){
//                 cout<<pp<<" ";
//             }
//             cout<<endl;
//             if(position.size()>1){
//                 for(int index = 1;index<position.size();index++){
//                     cout<<"calculated difference :"<<position[index]-position[index-1]<<endl;
//                     if(diff == position[index]-position[index-1]){
//                         flag = 1;
//                     }else{
//                         flag = 0;
//                         break;
//                     }
//                 }
//             }
//             //set all elements x to -1
//             for(int index = 0;index<position.size();index++){
//                 arr[position[index]] = -1;
//             }

//             //adding to answer.
//             if(flag==1){
//                 cout<<"including current item :"<<x<<" common difference :"<<diff<<endl;
//                 pair<int,int> q = make_pair(x,diff);
//                 answer.push_back(q);
//             }else{
//                 cout<<" not including item :"<<endl;
//             }
//             position.clear();

                
            
//         }
//         cout<<"moving to next item"<<endl<<"\n\n";
//     }
//     sort(answer.begin(),answer.end());
//     cout<<answer.size()<<endl;
//     for(int i = 0;i<answer.size();i++){
//         cout<<answer[i].first<<" "<<answer[i].second<<endl;
//     }
//     return 0;
// }
//optimized version below.
int main(){
    int n;
    cin>>n;
    vector<pair<int,int> >answer;
    vector<vector<int> > arr(1000005);
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr[x].push_back(i);
    }

    for(int i = 0; i<1000005; i++){
        if(arr[i].size()==1){
            answer.push_back(make_pair(i,0));
        }else if(arr[i].size()>1){
            sort(arr[i].begin(),arr[i].end());
            int cd = arr[i][1] - arr[i][0];
            bool good = true;
            for(int j = 1;j<arr[i].size();j++){
                good &= (arr[i][j]-arr[i][j-1])==cd;
            }
            if(good){
                answer.push_back(make_pair(i, cd));
            }
        }
    }

    cout<<answer.size()<<endl;
    for(int i = 0;i<answer.size();i++){
        cout<<answer[i].first<<" "<<answer[i].second<<endl;
    }
    return 0;
}