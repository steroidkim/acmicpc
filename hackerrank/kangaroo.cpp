#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if (x1 > x2 && v1 >= v2) {
        return "NO";
    } 
    if (x1 < x2 && v1 <= v2) {
        return "NO";
    }
    if (x1 == x2 && v1 > v2) {
        return "NO";
    }
    if (x1 == x2 && v1 < v2) {
        return "NO";
    }

    bool x1Big = false;
    if (x1 > x2) {
        x1Big = true;
    }

    while (true) {
        x1 += v1;
        x2 += v2; 

        if (x1Big && x1 < x2) {
            return "NO";
        }

        if (!x1Big && x1 > x2) {
            return "NO";
        }

        if (x1 == x2) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
