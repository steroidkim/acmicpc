#include <bits/stdc++.h>

using namespace std;

int minSteps(int n, string B){
    // Complete this function
    int cnt = 0;

    for (int i=0; i<n-2; i++) {
        if (B[i] == '0' && B[i+1] == '1' && B[i+2] == '0') {
            cnt++; i+=2;
        }
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;
    string B;
    cin >> B;
    int result = minSteps(n, B);
    cout << result << endl;
    return 0;
}

