#include <bits/stdc++.h>
using namespace std;

void func(vector<int>&arr, int n, int l)
{
    if(l >= (n-l-1))
    {
        for(int i= 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        return;
    }
    swap(arr[l], arr[n-l-1]);
    func(arr, n, ++l);
}

int main() {
    vector<int> arr = {2, 6, 5, 1, 7};
    int n = arr.size();
    int left = 0;
    // int right = n-1;
    func(arr, n, left);

    return 0;
}
