#include <bits/stdc++.h>
using namespace std;

bool flag = false;

void func(vector<int>&arr, int n, vector<int>&res, int index)
{
    if(index == arr.size())
    {
        if(flag == false)
        {
            flag = true;
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
    func(arr, n, res, index+1);
    
    res.pop_back();
    func(arr, n, res, index+1);
}

int main() {
    vector<int> arr = {2, 6};
    int n = arr.size();
    vector<int> res;
    int index = 0;
    func(arr, n, res, index);

    return 0;
}