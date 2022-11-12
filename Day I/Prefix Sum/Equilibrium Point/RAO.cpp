#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007
 
void solve(){
    ll n; cin>>n;

    vector<int> A(n, 0);
    for(int i=0; i<n; i++) cin>>A[i];
    
    ll sum = 0;
    for(int i=0; i<n; i++) sum += A[i];

    ll leftSum = 0;
    for(int i=0; i<n; i++){
        if(leftSum == sum - leftSum - A[i]){
            cout<<i+1<<endl;
            return;
        }
        leftSum += A[i];
    }

    cout<<-1<<endl;

    return;
}

int main(){
    fastIO
      
    solve();

    return 0;
}
