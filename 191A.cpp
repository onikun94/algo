#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    int speed = d;
    if(speed < v * t || speed > v * s){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
} 