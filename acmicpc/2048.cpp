#include <iostream>
#include <memory.h>

using namespace std;

int map[105][105], result, cnt, N;
int visit[105][105]; // 1이면 안전한 영역, 0이면 잠긴 영역

void inputData(int n)
{
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> map[i][j];
        }
    }
}

void floodFill(int m, int n, int k)
{
    if (m > N || n > N || m < 0 || n < 0|| visit[m][n] == 1 || map[m][n] <= k)
        return;

    visit[m][n] = 1;

    // Fill the U,D,W,R
    floodFill(m+1, n, k);
    floodFill(m-1, n, k);
    floodFill(m, n+1, k);
    floodFill(m, n-1, k);
}

int main()
{
    cin >> N;
    inputData(N);

    for (int k=0; k<=100; k++) {
        memset(visit, 0, sizeof(visit));
        for (int i=1; i<=N; i++) {
            for (int j=1; j<=N; j++) {
                if (visit[i][j] == 0 && map[i][j] > k) {
                    floodFill(i, j, k);
                    cnt++;
                }
            }
        }
        result = cnt >= result ? cnt : result;
        cnt = 0;
    }

    cout << result << endl;

    return 0;
}
