#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> set1;
    vector<int> set2;
    vector<int> set3;
    int zeros = 0;
    int positives = 0;
    int negatives = 0;
    for(int i = 0; i<n;i++){
        int x;
        cin>>x;
        if(x==0){zeros++;set3.push_back(x);}
        else if(x>0){positives++;set2.push_back(x);}
        else if(x<0){negatives++;set1.push_back(x);}
        arr.push_back(x);
    }

    // cout<<"zeros :"<<zeros<<endl;
    // cout<<"postives :"<<positives<<endl;
    // cout<<"negatives :"<<negatives<<endl;
    int x = 0;
    if(negatives%2==0){
        
        if(positives==0){
            // transfer 2 elements to set2 from set1
            // and transfer 1 element to set3 from set1 to make set1 negative product
            set2.push_back(set1[set1.size()-1]);
            set2.push_back(set1[set1.size()-2]);
            set3.push_back(set1[set1.size()-3]);
            x = 3;
        }else if(positives !=0){
            //transfer 1 element from set1 to set3 to make set1 -ve product
            set3.push_back(set1[set1.size()-1]);
            x = 1;
        }
    }else{
        if(positives==0){
            //transfer 2 elements to set2 from set1
            set2.push_back(set1[set1.size()-1]);
            set2.push_back(set1[set1.size()-2]);
            x = 2;
        }

    }
    // cout<<"x"<<x<<endl;
    cout<<set1.size()-x<<" ";
    for(int i =0;i<set1.size()-x;i++){
        cout<<set1[i]<<" ";
    }
    cout<<endl;
    cout<<set2.size()<<" ";
    for(int i = 0;i<set2.size();i++){
        cout<<set2[i]<<" ";
    }
    cout<<endl;
    cout<<set3.size()<<" ";
    for(int i =0;i<set3.size();i++){
        cout<<set3[i]<<" ";
    }
    cout<<endl;
    return 0;
}