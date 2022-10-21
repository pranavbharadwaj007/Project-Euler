#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<sstream>
#include<string>
#include<fstream>
using namespace std;

int main() {
ifstream file("names.txt");
    vector<string> vec;
    string token;
    while (getline(file, token, ','))
    {
       int ll=token.length();
       vec.push_back(token.substr(1,ll-2));
    }

    sort(vec.begin(), vec.end());
    unsigned long long int res=0;
    int i=1;
    for(string pt:vec){
        long long sum=0;
        for(char it:pt){
            sum+=(it-('A'-1));
            
        }
        sum*=(i++);
        res+=sum;
    }
    cout<<res<<endl;
return 0;
}
