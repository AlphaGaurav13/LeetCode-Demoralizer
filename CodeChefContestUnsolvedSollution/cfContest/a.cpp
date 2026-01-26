#include<bits/stdc++.h>
using namespace std;


int main() {
    

    int tt;
    cin >> tt;
    while(tt--) {

        int n,s,x;
        cin >> n >> s >> x;
        vector<int> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];


        int sum = accumulate(begin(arr), end(arr), 0);
        int temp = s - sum;

        if(temp < 0) {
            cout << "No" << endl;
            continue;
        }

        if(temp % x == 0) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
 

    return 0;
}