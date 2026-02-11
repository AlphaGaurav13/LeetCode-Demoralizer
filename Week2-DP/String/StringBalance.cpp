#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    stack<char> st;
    int count = 0;
    int ei = 0, n = s.size();
    while(ei < n) {
        if(st.empty()) {
            st.push(s[ei]);
        }else if(!st.empty() and st.top() == 'a' and s[ei] == 'a' || st.top() == 'b' and s[ei] == 'a' || st.top() == 'b' and s[ei] == 'b') {
            st.push(s[ei]);
        }else {
            count++;
            st.pop();
        }

        ei++;
    }

    cout << count << endl;

    return 0;
}