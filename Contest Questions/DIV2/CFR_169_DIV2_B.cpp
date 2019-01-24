#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> arr(26);
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }
    int x = 0;
	for (int i = 0; i < 26; i++)
		x += (arr[i] & 1);
    cout<<x<<endl;
    if(x<=1 || x%2==1){
        cout<<"First"<<endl;
    }else{
        cout<<"Second"<<endl;
    }
    return 0;
}