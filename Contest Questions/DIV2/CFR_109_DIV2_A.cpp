#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int min = 999999;
    int max = -999999;
    int rating;
    cin>>rating;
    min = rating;
    max = rating;
    int answer = 0;
    for(int i = 1;i<n;i++){
        int rating;
        cin>>rating;
        if(min > rating){
            answer++;
            min = rating;
        }
        if(max < rating){
            answer++;
            max = rating;
        }
    }
    cout<<answer<<endl;
    return 0;
}