#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1001];
bool check[1001];

void bfs(int s)
{
    queue<int> q;
    check[s] = true;
    q.push(s);

    while(!q.empty()) {
        int y = q.front();
        cout << y << " ";
        q.pop();
        for(int i=0; i<v[y].size(); i++) {
            int x = v[y][i];
            if (!check[x]) {
                check[x] = true;
                q.push(x);
            }
        }
    }
}

int main()
{
    int edge = 0, vertex = 0, start = 0;
    int from = 0, to = 0;

    cin >> edge;
    cin >> vertex;
    cin >> start;

    for (int i=0; i<vertex; i++) {
        cin >> from;
        cin >> to;
        v[from].push_back(to);
        v[to].push_back(from);
    }

    bfs(start);

    return 0;
}
