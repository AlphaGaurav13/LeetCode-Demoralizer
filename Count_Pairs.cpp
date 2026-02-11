#include <bits/stdc++.h>
using namespace std;
int getidx(int temp, vector<int> arr) {
    int s = 0;
    int e = arr.size() - 1;
    
    while(s <= e) {
        int mid = s + (e - s) / 2;
        if(arr[mid] == temp) {
            return mid;
        }else if(arr[mid] > temp) {
            e = mid - 1;
        }else {
            s = mid + 1;
        }
    }
    return 1;
}
long long countPairsLessThanX(vector<int>& arr, int x) {
    // Write your code here
    int left = 0;
    int right = arr.size() - 1;
    long long ans = 0;
    while(left < right) {
        if(arr[left] + arr[right] < x) {
            ans += right - left;
            left++;
            right--;
        }else if(arr[left] + arr[right] >= x) {
            right--;
        }else {
            left++;
        }
    }
    
    return ans;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << countPairsLessThanX(arr, x) << endl;
    return 0;
}