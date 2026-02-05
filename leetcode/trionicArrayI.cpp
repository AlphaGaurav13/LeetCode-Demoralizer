#include<bits/stdc++.h>
using namespace std;
void isTrionic(vector<int>& nums) {
        int a = 0, b = 0, c = 0;
        int i = 1;
        int n = nums.size();
        int maxElem = 0;
        while(i < n) {
            if(nums[i] > nums[i - 1] and i <= 1 and b == 0 and c == 0) {
                a++;

                
            }else if(nums[i] < nums[i - 1] and a > 0 and c == 0) {
                b++;
            }else if(nums[i] > nums[i - 1] and a > 0 and b > 0) {
                c++;
                cout << i << "";
                break;
            }

            

            i++;
        }

        // if(a > 0 and b > 0 and c > 0) {
        //     return true;
        // }

        // return a;
    }
int main() {

    vector<int> arr = {8,9,4,6,1};

    isTrionic(arr);
    // cout << ans << endl;
    return 0;
}