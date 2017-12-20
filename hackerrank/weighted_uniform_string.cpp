#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> v;

    for (int i=0; i<s.length(); i++) {
        if (i > 0 && s[i-1] == s[i]) {
            v.push_back(v[i-1] + (s[i]-'a'+1));
        }
        else {
            v.push_back((s[i]-'a'+1));
        }
    }


    int n;
    cin >> n;
    vector<int>::iterator it;

    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        it = find(v.begin(), v.end(), x);
        if (it == v.end()) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}

