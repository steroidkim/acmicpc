#include <iostream>

using namespace std;

int main()
{
    int w, e;
    cin >> w;
    cin >> e;
    // 2, 5 -> 10

    int cnt = 0;
    if (w==1) {
        cnt = e;
    }
    else {
        for (int a=0; a<w-1; a++) {
            for(int i=1; i<e; i++) {
                cnt += e-i;
            }
        }
    }


    cout << cnt << endl;
}
