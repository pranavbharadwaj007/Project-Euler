#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<set>
#include<map>
using namespace std;
int fac(int n,vector<int>&dp){
    if(n==1){
        dp[0]=1;
        dp[n]=1;
        return dp[n];
    }
    if(dp[n]!=0)return dp[n];
    else{
        dp[n]=n*fac(n-1,dp);
    }
    return dp[n];
}
bool isc(int n,vector<int>&dp){
    int sumi=0;
    int val=n;
    while(val){
        int rem=val%10;
        val=val/10;
        sumi+=dp[rem];
    }
    return sumi==n;
}
int main() {
vector<int>dp(10,0);
fac(9,dp);
long long sumi=0;
for(int i=11;i<=dp[9];i++){
    if(isc(i,dp)){
        sumi+=i;
    }
}
cout<<sumi;
return 0;
}
