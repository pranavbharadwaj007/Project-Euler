#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<fstream>
using namespace std;

int main() {
        int fact=1;
        int k=1e6;
        int n=9;
        vector<int>num;
        for(int i=0;i<=n;i++){
            if(i>0)fact=fact*i;
            num.push_back(i);
        }
    
        string tem="";
        k--;
        while(true){
            tem+=to_string(num[k/fact]);
            num.erase(num.begin()+(k/fact));
            if(num.size()==0)break;
            k=k%fact;
            fact=fact/num.size();
        }
        cout<<tem<<endl;
return 0;
}
