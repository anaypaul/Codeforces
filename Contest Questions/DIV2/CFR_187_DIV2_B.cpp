#include<map>
#include<set>
#include<queue>
#include<vector>
#include <iostream>
#define ll long long
using namespace std;
const int N = 111111;

ll n, m;
ll pre[N]; //for storing the position where the value has been updated in the array. 
ll sum[N]; //store the running sum values after n type-2 operations performed on the sum array.
ll a[N]; // the main array.

int main()
{
    cin>>n>>m;
    sum[0] = 0;
    for(int i = 1; i<= n;++i){
        pre[i] = 0;
        cin>>a[i];
    }
    for(int i = 0;i<n+1;i++){
        cout<<sum[i]<<" ";
    }
    ll operation, value, position;
    for(int i = 1;i<=m;i++){
        cin>>operation;
        if(operation ==1){
            cin>>position>>value;
            a[position] = value;
            pre[position] = i;
            sum[i] = sum[i-1];
        }else if(operation==2){
            cin>>value;
            sum[i] = sum[i-1] + value;
        }else{
            cin>>position;
            sum[i] = sum[i-1];
            cout<<sum[i] - sum[ pre[position] ] + a[position]<<endl;
        }
    }
    return 0;
}


//I hate this town, bacause it's too filled with memories I'd rather forget.
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

//kAc
const double pi = acos(-1.0), eps = 1e-9;
const int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
const int dy[8] = {0, 0, 1, -1, 1, -1, -1, 1};
const int MO = (int)(1e9 + 7);

//Two becomes one,and it through all eternity.
#define ALL(x) x.begin(), x.end()
#define fr(x, E) for (__typeof(E.begin()) x = E.begin(); x != E.end(); x++)
#define MP make_pair
#define PB push_back
#define FR first
#define SC second
#define ERR cerr << "ERROR" << endl
#define LL long long
#define LD long double
#define PII pair<int, int>
#define PIII pair<PII, int>
#define PDI pair<double, int>
#define PID pair<int, double>
#define SZ(a) (int)((a).size())
#define VEC vector
#define STR string
#define ISS istringstream
#define OSS ostringstream
#define CLR(a, b) memset(a, b, sizeof(a))
#define gmin(a, b) { if (b < a) a = b; }
#define gmax(a, b) { if (b > a) a = b; }

using namespace std;
int a[1000001], add, n, Q;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("temp.in", "r", stdin); freopen("temp.out", "w", stdout);
#endif
   scanf("%d%d", &n, &Q);
   for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
   while(Q--){
	   int op;
	   scanf("%d", &op);
		   switch(op){
			   case 1 : {
							int idx, val; scanf("%d%d", &idx, &val);
							a[idx] = val - add;
							break;
						}
			  case 2 : {
						   int val; scanf("%d", &val);
						   add += val;
						   break;
					   }
			 case 3 : {
						  int idx; scanf("%d", &idx);
						  printf("%d\n", a[idx] + add);
					  }
		   }
	   }

}