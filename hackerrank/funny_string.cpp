#include <bits/stdc++.h>
#include <string>

using namespace std;

string funnyString(string s){
    // Complete this function
    string rev(s);
    reverse(rev.begin(), rev.end());
    
    for (int i=0; i<s.length()-1; i++) {
        int diff1 = s[i+1] - s[i];
        int diff2 = rev[i+1] - rev[i];
        
        if (abs(diff1) != abs(diff2)) {
            return "Not Funny";
        }
    }
    
    return "Funny";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}

