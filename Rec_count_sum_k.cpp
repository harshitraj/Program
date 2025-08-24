#include <bits/stdc++.h>
using namespace std;


int func(vector<int>&arr, int n, vector<int>&res, int index, int k, int sum)
{
    if(index == arr.size())
    {
        if(k == sum)
        {
            return 1;
        }
        return 0;
    }
    res.push_back(arr[index]);
    int l = func(arr, n, res, index+1, k, sum+arr[index]);
    
    res.pop_back();
    int r = func(arr, n, res, index+1, k, sum);
    
    return l+r;
}

int main() {
    vector<int> arr = {-1, -2, 3, 4, 5};
    int n = arr.size();
    vector<int> res;
    int index = 0;
    int k = 5;
    int sum = 0;
    int result = func(arr, n, res, index, k, sum);
    cout << result;

    return 0;
}