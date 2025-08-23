#include <bits/stdc++.h>
using namespace std;


bool func(vector<int>&arr, int n, vector<int>&res, int index, int k, int sum)
{
    if(k == sum)
    {
        cout << "{ ";
        for(int i= 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "}";
        cout << endl;
        return true;    
    }

    if(index == arr.size())
    {
        return false;
    }
    res.push_back(arr[index]);
    if(func(arr, n, res, index+1, k, sum+arr[index]) == true) return true;
    
    res.pop_back();
    if(func(arr, n, res, index+1, k, sum)== true) return true;
    
    return false;
}

int main() {
    vector<int> arr = {-1, -2, 3, 4, 5};
    int n = arr.size();
    vector<int> res;
    int index = 0;
    int k = 5;
    int sum = 0;
    bool result = func(arr, n, res, index, k, sum);

    return 0;
}