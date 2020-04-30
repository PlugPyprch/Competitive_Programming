#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,suma,sumb;
    cin >> a >> b;
    int n = 0;
    while(a<=b){
        a = a*3;
        b = b*2;
        n++;
    }
    cout << n;
}
