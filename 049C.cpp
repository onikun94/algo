#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    string data[4] = {"dream", "dreamer", "erase", "eraser"};

    reverse(S.begin(), S.end());
    for(int i = 0; i < 4; i++){
        reverse(data[i].begin(), data[i].end());
    }
    bool answer = true;
    for(int i =0; i < S.size(); ){
        bool answer2 = false;
        for(int j = 0; j < 4; j++){
            string d = data[j];
            if(S.substr(i, d.size()) == d){
                answer2 = true;
                i += d.size();
            }
        }

        if(!answer2){
            answer = false;
            break;
        }
    }
    if(answer){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

} 