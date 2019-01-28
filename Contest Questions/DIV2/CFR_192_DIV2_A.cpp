#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    vector<bool> rows(r,true);
    vector<bool> cols(c,true);
    char mat[r][c] ;
    for(int i = 0;i<r;i++){
        string s;
        cin>>s;
        for(int j = 0;j<s.length();j++){
            mat[i][j] = s[j];
            if(s[j] == 'S'){
                rows[i] = false;
            }
        }
    }

    for(int j = 0;j<c;j++){
        for(int i = 0;i<r;i++){
            if(mat[i][j] == 'S'){
                cols[j] = false;
            }
        }
    }
    int ans = 0;
    for(int i = 0;i<rows.size();i++){
        if(rows[i]){
            for(int j = 0;j<c;j++){mat[i][j]='x';}
        }
    }

    for(int j = 0;j<cols.size();j++){
        
        if(cols[j]){
            for(int i = 0;i<r;i++){
                mat[i][j] = 'x';
            }
        }
    }

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(mat[i][j]=='x'){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}