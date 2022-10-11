
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
   vector<string>arr(n);
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    vector<int>nums;
    unsigned long long int sum = 0;
    for (int i=49; i>=0; i--)
    {
        for (int j=0; j<n; j++)
        {
            sum = sum + arr[j][i]-'0';
        }
        nums.push_back(sum%10);
        sum = sum/10;
    }
    while (sum>0)
    {
        nums.push_back(sum%10);
        sum = sum/10;
    }
    unsigned long long int number = 0;
    for (int i=nums.size()-1; i>=nums.size()-10; i--)
    {
        number = number*10+nums[i];
    }
    cout << number;
    return 0;
}
