#include <bits/stdc++.h>

using namespace std;

int alternatingCharacters(string s){
    // Complete this function
    if (s.length() == 1) {
        return 0;
    }

    int cnt = 0;
    for (int i=0; i<s.length()-1; i++) {
        if (s[i] == s[i+1]) {
            cnt++;
        }
    }
    
    return cnt;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = alternatingCharacters(s);
        cout << result << endl;
    }
    return 0;
}
