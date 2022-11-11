#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<set>
#include<map>
using namespace std;
bool isp(long long x, long long y){
  vector<int>vis(10,0);
  long long prod=x*y;
  while(x){
    int rem=x%10;
    x=x/10;
    if(vis[rem]==1 || rem==0 ){
        return false;
    }
    vis[rem]=1;
  }
  while(y){
    int rem=y%10;
    y=y/10;
    if(vis[rem]==1 || rem==0){
        return false;
    }
    vis[rem]=1;
  }
  while(prod){
    int rem=prod%10;
    prod=prod/10;
    if(vis[rem]==1 || rem==0){
        return false;
    }
    vis[rem]=1;
  }
  for(int i=1;i<=9;i++)if(vis[i]==0)return false;
  return true;
}
int main() {
long long ans=0;
set<int>res;
for(int i=1;i<=10000;i++){
    for(int j=1;j<=10000;j++){
        if(isp(i,j)){
            int prod=i*j;
            res.insert(prod);
        }
    }
}
for(int it:res){
    ans+=it;
}
cout<<ans<<endl;
return 0;
}
