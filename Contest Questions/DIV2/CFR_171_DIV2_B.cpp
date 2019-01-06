#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n,t;
    cin>>n>>t;
    int orgt = t;
    vector<int> time;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        time.push_back(x);
    }
    int count=0,maxcount=-1;
    for(int i = 0;i<n;){
        if(count<0){
            break;
        }
        int j = i;
        while(j<n && t >= time[j]){
            count++;
            t = t - time[j];
            j++;
        }
        if(j < n){
            if(maxcount < count){
                maxcount = count;
            }
            if(t+time[j-count] <= orgt){
                t = t + time[j-count];
                count--;
            }else{
                j=j+1;
                i = j;
                continue;
            }
        }else{
            if(maxcount < count){
                maxcount = count;
            }
            break;
        }
        i = j;
    }
    cout<<maxcount<<endl;
    return 0;
}