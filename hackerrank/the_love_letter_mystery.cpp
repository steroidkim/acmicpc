#include <bits/stdc++.h>

using namespace std;

int theLoveLetterMystery(string s){
    // Complete this function
    int mid = s.length()/2;
    int cnt = 0;

    for (int i=0; i<mid; i++) {
        int diff = abs(s.at(i) - s.at(s.length() -1 -i));
        cnt += diff;
    }

    return cnt;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = theLoveLetterMystery(s);
        cout << result << endl;
    }
    return 0;
}
