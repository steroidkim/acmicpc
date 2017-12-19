#include <iostream>
using namespace std;

int main()
{
    int total, kim, imm;
    int cnt = 0;

    cin >> total;
    cin >> kim;
    cin >> imm;

    if (total < kim || total < imm){
        cnt = -1;
    }

    else {
        while (kim != imm) {
            kim = (kim + 1) / 2;
            imm = (imm + 1) / 2;
            cnt++;
        }
    }

    cout << cnt;
}
