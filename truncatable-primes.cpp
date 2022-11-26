#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<set>
#include<map>
using namespace std;
void sieve(vector<bool>&dp){
    dp[0]=false;
    dp[1]=false;
    for(int i=2;i<=1000000/i;i++){
        if(dp[i]){
            for(int j=i*i;j<=1000000;j+=i){
                dp[j]=false;
            }
        }
    }
}
bool isLeftTruncatable(int n,vector<bool>&dp)
    {
        string s = to_string(n);
        int i=0;
        while(i<s.length())
        {
            if(!dp[stoi(s.substr(i, s.length()-i))]) return false;
            i+=1;
        }
        return true;
    }
bool isRightTruncatable(int n,vector<bool>&dp)
    {
        while(n!=0)
        {
            if(!dp[n]) return false;
            n/=10;
        }
        return true;
    }
int main() {
    vector<bool>dp(1000002,true);
    sieve(dp);
    long long res=0;
    for(int i=11;i<=1000000;i++){
        if(dp[i] && isRightTruncatable(i,dp) && isLeftTruncatable(i,dp))
                res+=i;
    }
    cout<<res;
return 0;
}
