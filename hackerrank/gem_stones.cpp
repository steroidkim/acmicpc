#include <bits/stdc++.h>

using namespace std;

int alphabet[26];

int gemstones(vector <string> arr){
    // Complete this function
    int cnt = 0;

    for (int i=0; i<arr.size(); i++) {
        string str = arr[i];
        for (int j=0; j<str.length(); j++) {
            int index = str[j] - 'a';
            if (alphabet[index] == i) alphabet[index]++;
        }
     }

     for (int i=0; i<26; i++) {
        if (alphabet[i] == arr.size()) {
            cnt++;
        }
     }

     return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = gemstones(arr);
    cout << result << endl;
    return 0;
}
