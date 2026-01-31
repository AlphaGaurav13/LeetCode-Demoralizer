#include<bits/stdc++.h>
using namespace std;


string reverseByType(string s) {
        string temp = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a' || s[i] <= 'z') {
                temp += s[i];
            }
        }

        reverse(temp.begin(), temp.end());
        
        reverse(s.begin(),s.end());
        int j = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a' || s[i] <= 'z') {
                s[i] = temp[i];
            }
        }
        return temp;
}



int main() {

    string s;
    cin >> s;

    string g = reverseByType(s);
    for(char ch : g) {
        cout << ch << " ";
    }

    return 0;
}