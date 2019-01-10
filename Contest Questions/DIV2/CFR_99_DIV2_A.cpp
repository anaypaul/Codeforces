#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> pages;
    int pages_in_week = 0;
    for(int i = 0;i<7;i++){
        int x;
        cin>>x;
        pages.push_back(x);
        pages_in_week += x;
    }
    // cout<<pages_in_week<<endl;
    
    int weeks = n/pages_in_week;
    int remaining = n - weeks*pages_in_week;
    if(remaining != 0){
        for(int i = 0;i<pages.size();i++){
            if(remaining - pages[i] <= 0){
                cout<<i+1<<endl;
                return 0;
            }else{
                remaining = remaining - pages[i];
            }
        }
    }else{
        for(int i = pages.size()-1;i>=0;i--){
            if(pages[i]>0){
                cout<<i+1<<endl;
                return 0;
            }
        }
        
    }
    
    return 0;
}