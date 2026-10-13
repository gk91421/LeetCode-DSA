#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    int n = arr.size();
    vector<int> ans;

    int maxRight = arr[n - 1];
    ans.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            ans.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    reverse(ans.begin(), ans.end());

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}