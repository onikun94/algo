#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main()
{
    int N, M;
    cin >> N >> M;
    Graph G(N);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    for (int i = 0; i < M; i++)
    {
        cout << G[0][i] << endl;
    }
}