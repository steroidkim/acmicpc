#include <iostream>
#include <algorithm>
using namespace std;

int N;              //  계단의 개수
int p[310];     //  P[i]: i 계단을 밟았을 때 얻는 점수
int dp[310];

int max(int l, int r)
{
	if (l>r) return l;
	else return r;
}

int Solve(){
    int sol=0;
    
    dp[0] = p[0];
    dp[1] = p[0] + p[1];
    dp[2] = max(p[0]+p[2], p[1]+p[2]);
    for (int i=3; i<N; i++) {
        dp[i] = max(p[i] + dp[i-2], p[i] + p[i-1] + dp[i-3]); // i가 3 이상일때부터 사용 가능
    }

    return dp[N-1];
}

void InputData(){
    cin >> N;
    for(int i=0 ; i<N ; i++){
        cin >> p[i];
    }
}

int main(){
    
    InputData();                    //  입력 함수

    int sol = Solve();

    cout << sol << endl;        //  정답 출력
    return 0;
}
