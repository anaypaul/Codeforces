#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n,k;
    cin>>n>>k;
    vector<char> s;
    vector<long long int> hash(26,0);
    for(long long int i = 0;i<n;i++){
        char x;
        cin>>x;
        s.push_back(x);
    }
    for(long long int i=0;i<n;i++){
        // cout<<s[i];
        hash[s[i]-'A']++;
    }
    
    sort(hash.begin(),hash.end());
    reverse(hash.begin(),hash.end());
    // for(int x:hash){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    long long int ans = 0;
    for(long long int i = 0;i<hash.size();i++){
        if(hash[i]<=k && k !=0 && hash[i]!=0){
            ans += hash[i]*hash[i];
            k = k - hash[i];
        }
        else if(hash[i]>k && k !=0&& hash[i]!=0){
            ans += k*k;
            k = 0;
        }
        if(k==0){
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
