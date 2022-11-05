
#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<fstream>
#include<map>
using namespace std;

int getMinpow(int n,map<int,int>min_pow){
    if(min_pow.find(n)!=min_pow.end()){
        return min_pow[n];
    }
    return 1;
}

void swapfact(int base,int f1,int f2,vector<vector<int>>&dp,map<int,int>min_pow){
    if(f1==1){
        dp[base][f2]=1;
        return;
    }

    if(f1<=min_pow[base]){
        int nb=pow(base,f1);
        dp[nb][f2]=-1;
    }
    if(f2<=min_pow[base]){
        int np=pow(base,f2);
        dp[np][f1]=-1;
    }
}
vector<int> isperfact(int n){
    vector<int>vp;
    for(int i=2;i<=n/i;i++){
        int itr=2;
        while(pow(i,itr)<n)itr++;
        if(pow(i,itr)==n){
            vp.push_back(i);
            vp.push_back(itr);
            return vp;
        }else{
            continue;
        }
    }
    return vp;
}
vector<pair<int,int>> checkperand(int n){
    vector<pair<int,int>>vp;
for(int i=2;i<=n/i;i++){
        int itr=2;
        while(pow(i,itr)<n)itr++;
        if(pow(i,itr)==n){
            vp.push_back({i,itr});
            
        }else{
            continue;
        }
    }
    if(vp.size()>1)vp.pop_back();
    return vp;
}
void swapfact2(int nb,int np,vector<vector<int>>&dp){
    if(nb<=100 && np<=100 && dp[nb][np]==0){
        dp[nb][np]=-1;
    }
}

int main() {
map<int,int>min_pow;
vector<vector<int>>dp(101,vector<int>(101,0));
map<int,vector<pair<int,int>>>fact;
cout<<"hello"<<endl;
// min value of pow were pow less than 100
min_pow[2]=6;
min_pow[3]=4;
min_pow[4]=3;
min_pow[5]=2;
min_pow[6]=2;
min_pow[7]=2;
min_pow[8]=2;
min_pow[9]=2;
min_pow[10]=2;

// compute factors

for(int i=2;i<=100;i++){
    int tar=i;
    vector<pair<int,int>>vp;
    for(int j=1;j<=(tar/j);j++){
        if(tar%j==0){
            int pp=tar/j;
            vp.push_back({j,pp});
        }
    }
    fact[tar]=vp;
}
cout<<"hello"<<endl;
// logic

for(int base=2;base<=dp.size();base++){
    for(int power=2;power<=dp.size();power++){
        if(dp[base][power]!=-1){
            auto facvec=fact[power];
            for(auto it:facvec){
                int f1=it.first;
                int f2=it.second;
                swapfact(base,f1,f2,dp,min_pow);
                if(isperfact(base).size()>0){
                    auto vit=checkperand(base);
                    for(auto pt:vit){
                        int f11=pt.first;
                        int f12=pt.second;
                        int nb=pow(f11,f1);
                        int np=f2*f12;
                        swapfact2(nb,np,dp);
                    }
                }
            }
       }
    }
}
cout<<"hello"<<endl;
int cnt=0;
for(int i=2;i<=dp.size()-1;i++){
    for(int j=2;j<=dp.size()-1;j++){
        if(dp[i][j]==1)cnt++;
    }
}
cout<<cnt<<endl;
cout<<"hello"<<endl;

return 0;
}
