#include<bits/stdc++.h>
using namespace std;

bool isp(string a, string b) {
    int as = a.size();
    int bs = b.size();
    if(abs(as - bs) != 1) {
        return false;
    }

    unordered_map<char, int> mp1,mp2;
    for(size_t  i = 0; i < a.size(); i++) {
        mp1[a[i]] = i;
    }

    for(size_t  i = 0; i < b.size(); i++) {
        mp2[b[i]] = i;
    }


    if(a.size() > b.size()) {
        for(size_t  i = 1; i < b.size(); i++) {
            if(mp1[b[i]] > mp1[b[i - 1]]) {
                continue;
            }else {
                return false;
            }
        }
    }else {
        for(size_t  i = 1; i < a.size(); i++) {
            if(mp2[a[i]] > mp2[a[i - 1]]) {
                continue;
            }else {
                return false;
            }
        }
    }

    return true;
    
}


int main() {
    string a,b;
    cin >> a >> b;

    if(isp(a,b) == true) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}