#include <bits/stdc++.h>
using namespace std;

const vector<int> a = {3,5,8,10,14,17,21,39};

int binary_search(int key){
    int left = 0, right = (int)a.size() -1;
    while(right >= left){
        int mid = left + (right - left)/2;
        cout << "mid =" << mid << endl;
        if(a[mid] == key) return mid;
        else if(a[mid] > key)  right =mid - 1;
        else if(a[mid] < key)  left = mid + 1;
    }
    return -1;
}

int main(){
    cout << binary_search(3) << endl;
    cout << binary_search(5) << endl;
    cout << binary_search(8) << endl;
    cout << binary_search(10) << endl;
    cout << binary_search(14) << endl;
    cout << binary_search(17) << endl;
    cout << binary_search(21) << endl;
    cout << binary_search(39) << endl;
    cout << binary_search(-999) << endl;
}