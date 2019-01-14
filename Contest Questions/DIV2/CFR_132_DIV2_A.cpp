#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    vector<int> a;
    vector<int> b;
    cin>>n;
    for( int i = 0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    cin>>m;
    for(int j = 0; j<m; j++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    reverse(b.begin(),b.end());
    int max_ratio = -1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(b[j]%a[i] == 0){
                if(b[j]/a[i] >max_ratio){
                    max_ratio = b[j]/a[i];
                }
                break;
            }
        }
    }

    // cout<<max_ratio<<endl;
    int answer = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(b[j]%a[i]==0){
                int r = b[j]/a[i];
                if(r==max_ratio){
                    answer++;
                }
                break;
            }
        }
    }
    cout<<answer<<endl;
    return 0;
}
