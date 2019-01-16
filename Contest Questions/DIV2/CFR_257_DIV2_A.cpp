#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr;
    int max = -1;
    int index = -1;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        if(x>max){
            max = x;
            index = i+1;
        }
        arr.push_back(x);
    }
    if(m >=max){
        cout<<n<<endl;
    }else{
        int index = -1;
        int count = 0;
        int i = 0;
        for(i = 0; count<n;i++){
            if(arr[i%n] >0){
                arr[i%n] -= m;
                if(arr[i%n] <=0){
                    count++;
                }
            }
            if(count==n){
                break;
            }
        }
        
        cout<<i%n + 1<<endl;
    }
    
    return 0;
}