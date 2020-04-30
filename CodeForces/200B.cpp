#include<bits/stdc++.h>
using namespace std;

int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);

        double a,t,sum=0,d;
        cin >> t;
        a = t*100;
        while(t--){
            cin >> d;
            sum += d;
        }
        printf("%.12f",sum/a*100);
}
