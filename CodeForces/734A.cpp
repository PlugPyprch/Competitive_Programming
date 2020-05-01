#include<bits/stdc++.h>
using namespace std;

int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);

        int a,ia=0,ib=0;
        string b;
        cin >> a;
        cin >> b;

        for(int i =0 ; i < a ;i ++){
            if(b[i] == 'A')
                ia++;
            else
                ib++;
        }
        if(ia>ib)
            cout << "Anton";
        else if(ia<ib)
            cout << "Danik";
        else
            cout << "Friendship";
}

