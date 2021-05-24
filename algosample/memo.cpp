#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> memo;
 
ll fibo(int N){
    if(N == 0) return 0;
    else if(N == 1) return 1;

    if(memo[N] != -1){
        cout << "memo[N]= " << memo[N] <<"  N= " << N <<endl;
        return memo[N];
    } 

    return memo[N] = fibo(N - 1) + fibo(N -2);
}

int main(){
    memo.assign(50,-1);
    fibo(49);
    for(int N = 2; N < 50; N++){
        cout << "fibo(" << N << ") =" << memo[N] << endl;
    }
}