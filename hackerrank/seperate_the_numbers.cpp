#include <bits/stdc++.h>

using namespace std;

long checkCountinousNumber(string s)
{
    if (s[0] == '0')
        return -1;

    for (int length = 1; length*2 <= s.length(); length++) {
        long firstNumber = stol(s.substr(0, length));
        //cout << "len: " << length << " first: " << firstNumber << endl;
        long number = firstNumber;
        string seq;

        while (seq.length() < s.length()) {
            seq.append(to_string(number));
            number++;
        }
        if (seq == s) {
            //cout << "seq: " << seq << endl;
            return firstNumber;
        }
    }

    return -1;
}

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        
        long result = checkCountinousNumber(s);
        if (result < 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES " << result << endl;
        }
    }
    
    return 0;
}

