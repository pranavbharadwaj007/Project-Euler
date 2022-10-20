#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long>dp(n,1);
    dp[0]=dp[1]=0;
    for(int i=2;i<(n/2)+1;i++){
        for(int j=2*i;j<n;j+=i){
            dp[j]+=i;
        }
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        if(dp[i]>n)continue;
        else if(dp[dp[i]]==i && i!=dp[i])sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
