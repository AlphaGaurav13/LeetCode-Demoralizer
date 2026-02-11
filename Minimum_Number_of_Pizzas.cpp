#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }

    return gcd(b, a%b);
}
int main() {
	int tt;
	cin >> tt;
	while(tt--) {
	    long long f,s;
	    cin >> f >> s;
	    int count = f / (gcd(f, s));
	    
	    cout << count << endl;
	}
}
