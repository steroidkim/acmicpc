#include <bits/stdc++.h>
#include <string>

using namespace std;

string base = "hackerrank";

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        int i, j;
        for (i=0, j=0; i<s.length() && j<base.length(); i++) {
            if (s[i] == base[j]) {
                j++;
            }
        }

        if (j == base.length()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
