#include<bits/stdc++.h>
using namespace std;

int main(){
    int irow=0,icol=0,rs,cs;
    int a[5][5];
    for(int i = 1;i <= 5;i++){
        for(int j = 1;j <= 5;j++){
            scanf("%d",&a[i-1][j-1]);
            if(a[i-1][j-1] != 0){
                irow = i;
                icol = j;
            }
        }
    }
    if(irow < 3)
        rs = 3-irow;
    else if(irow > 3)
        rs = irow-3;
    else if(irow == 3)
        rs = 0;
    if(icol < 3)
        cs = 3-icol;
    else if(icol > 3)
        cs = icol-3;
    else if(icol == 3)
        cs = 0;

    cout << rs + cs << endl ;
}
