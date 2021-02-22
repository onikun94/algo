#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int in(){
    int n;
    scanf("%d", &n);
    return n;
}

int main(){
    int n,x,a;

    n = in();
    x = in();
    
    for(int i = 0; i < n; i++){
        a = in();
        if(a != x){
            printf("%d", a);
        }
    }
    printf(" ");

    return 0;
} 