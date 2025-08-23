#include <bits/stdc++.h>
using namespace std;


void func(vector<int>&arr, int n, vector<int>&res, int index, int k, int sum)
{
    if(index == arr.size())
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
        }
        return;
    }
    res.push_back(arr[index]);
    func(arr, n, res, index+1, k, sum+arr[index]);
    
    res.pop_back();
    func(arr, n, res, index+1, k, sum);
}

int main() {
    vector<int> arr = {-1, -2, 3, 4, 5};
    int n = arr.size();
    vector<int> res;
    int index = 0;
    int k = 5;
    int sum = 0;
    func(arr, n, res, index, k, sum);

    return 0;
}