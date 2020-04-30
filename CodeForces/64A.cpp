#include<bits/stdc++.h>
using namespace std;

int fac(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}

int main(){
    int num;
    cin >> num;

    int a = fac(num);
    cout << a;
}