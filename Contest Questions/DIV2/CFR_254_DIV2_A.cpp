#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    char arr[101][101];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            char ch;
            cin>>ch;
            arr[i][j] = ch;
        }
    }
    for(int i = 0 ; i<n; i++){
        if(i%2==0){
            char c1 = 'B';
            char c2 = 'W';
            int x = 0;
            for(int j = 0;j<m;j++){
                x++;
                if(arr[i][j]=='-'){
                    continue;
                }
                else{
                    if(x%2==0){
                        arr[i][j] = c1;
                    }else{
                        arr[i][j] = c2;
                    }
                }
            }
        }else{
            char c1 = 'W';
            char c2 = 'B';
            int x = 0;
            for(int j = 0;j<m;j++){
                x++;
                if(arr[i][j]=='-'){
                    continue;
                }
                else{
                    if(x%2==0){
                        arr[i][j] = c1;
                    }else{
                        arr[i][j] = c2;
                    }
                }
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
