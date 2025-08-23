#include <bits/stdc++.h>
using namespace std;

//Standard way using return type as bool
//store the return value of recursive call in a variable and check if it is true or false
//if true return true otherwise continue with other calls
//base case return true when first subsequence is printed
//TC: O(2^n) SC: O(n) auxiliary stack space + O(n) for res vector
bool func(vector<int>&arr, int n, vector<int>&res, int index)
{
    if(index == arr.size())
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
    res.push_back(arr[index]);
    if(func(arr, n, res, index+1) == true) return true;
    
    res.pop_back();
    if(func(arr, n, res, index+1) == true) return true;
    
    return false;
}

int main() {
    vector<int> arr = {2, 6};
    int n = arr.size();
    vector<int> res;
    int index = 0;
    bool result = func(arr, n, res, index);

    return 0;
}



//Another way using a global/static variable to check if first subsequence is printed
//TC: O(2^n) SC: O(n) auxiliary stack space + O(n) for res vector
// bool flag = false;

// void func(vector<int>&arr, int n, vector<int>&res, int index)
// {
//     if(index == arr.size())
//     {
//         if(flag == false)
//         {
//             flag = true;
//             cout << "{ ";
//             for(int i= 0; i < res.size(); i++)
//             {
//                 cout << res[i] << " ";
//             }
//             cout << "}";
//             cout << endl;
//         }
//         return;
//     }
//     res.push_back(arr[index]);
//     func(arr, n, res, index+1);
    
//     res.pop_back();
//     func(arr, n, res, index+1);
// }

// int main() {
//     vector<int> arr = {2, 6};
//     int n = arr.size();
//     vector<int> res;
//     int index = 0;
//     func(arr, n, res, index);

//     return 0;
// }
