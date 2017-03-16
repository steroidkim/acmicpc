#include <iostream>
#include <cstdio>

#if 0
이 문제는 간단한 동적 계획법을 이용하여 풀 수 있다.
어떤 동적계획법이든 마찬가지지만 시간초과가 제일 문제이다.
일단 이 문제는 확률과통계에서 나오는 조합을 이용하여 풀 수 있다.
eCw = e-1Cw-1 + e-1Cw (e = east, w = west) 공식을 이용하여 풀면 된다.
eC0 = 1일 때와 e==w일 때를 출구조건으로 하면 간단하게 풀 수 있다.
(memoization을 이용하지 않으면 시간초과가 뜨므로 주의한다.)
#endif

using namespace std;
 
unsigned long long result[30][30];
 
unsigned long long combination(int east, int west) {
    if (east == west || west == 0)
        return result[east][west] = 1;
    if (result[east][west] > 0)
        return result[east][west];
    else
        return result[east][west] = combination(east - 1, west - 1) + combination(east - 1, west);
}
 

int main() {
    int N;
    int west, east;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> west >> east;
        cout << combination(east, west) << endl;
    }
    return 0;
}
 
