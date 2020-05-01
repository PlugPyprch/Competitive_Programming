#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b,min,max,o1=0,o2=0;
    cin >> a >> b;
    if(a<b){
        min = a; 
    }
    else {
        min = b;
    }

    while(min--){
        a--;
        b--;
        o1++;
    }
    if(a > 0){
        max = a;    
    }
    else{
        max = b;    
    }
    cout << o1 << " ";
    
    
    if(max > 1){
        o2 = max/2;     
    }
    cout << o2;
        
}