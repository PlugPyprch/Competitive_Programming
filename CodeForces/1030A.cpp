#include<bits/stdc++.h>
using namespace std;

int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);

        int n,a,b=0;
        cin >> n;
        while(n--){
            cin >> a;
            if(a == 1){
                b = 1;
                break;
            }
        }
        if(b == 1)
            cout << "HARD";
        else
            cout << "EASY";

}

