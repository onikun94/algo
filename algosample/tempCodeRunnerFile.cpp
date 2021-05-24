#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //input
    int N, M;
    cin >> N >> M;
    vector<int> cityA(M);
    vector<int> cityB(M);
    for(int i = 0; i < M; i++){
        cin >> cityA[i];
        cin >> cityB[i];
    }
    //backet
    vector<int> backet(M);
    for(int i =0; i < N; i++){
        backet[i] = 0;
    }

    for(int i =0; i < M; i++){
        backet[cityA[i] -1] ++;
        backet[cityB[i] -1] ++;
    }

    for(int i =0; i < N; i++){
        cout << backet[i] << endl;
    }

    
} 