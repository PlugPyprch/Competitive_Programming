#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sumj = 0,sumi = 0;
    cin >> n;
    if(n>=1&&n<=100){
    int area[n][3];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            cin >> area[i][j];
            if(area[i][j]>=-100&&area[i][j]<=100){
            sumj = sumj + area[i][j];
            }
        }
        sumi = sumi + sumj;
        sumj = 0;
    }
    if(sumi == 0)
        cout << "YES";
    else{
        cout << "NO";
    }
    }

}