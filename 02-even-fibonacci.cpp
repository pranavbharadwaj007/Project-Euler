
#include <iostream>
using namespace std;
#define ll long long
const int M = 1e7 + 7;
int main() {
    int a=1;
    int b=2;
    int sum=2;
    int c=0;
    while(true){
         c=a+b;
         if(c>4000000)break;
        //if(c+sum>4000000 && c%2==0)break;
        if(c%2==0)
        sum=sum+c;
        a=b;
        b=c;
    }
    cout<<sum<<endl;
    return 0;
}
