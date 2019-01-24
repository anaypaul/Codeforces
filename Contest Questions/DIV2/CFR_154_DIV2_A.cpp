#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
    int n,m;
    cin>>n>>m;
    string s = "";
    if(n==m){
        for(int i =0;i<n+m;i++){
            if(i%2==0){
                s = s + "B";
            }else{
                s = s + "G";
            }
        }
    }else if(n > m){
        int x = min(n,m);
        for(int i = 0;i<2*x;i++){
            if(i%2==0){
                s = s+"B";
            }else{
                s = s +"G";
            }
        }
        int y = n+m - 2*x;
        for(int i = 0;i<y;i++){
            s = s + "B";
        }
    }else{
        int x = min(n,m);
        for(int i = 0;i<2*x;i++){
            if(i%2==0){
                s = s+"G";
            }else{
                s = s +"B";
            }
        }
        int y = n+m - 2*x;
        for(int i = 0;i<y;i++){
            s = s + "G";
        }
    }
    cout<<s<<endl;
    return 0;
}