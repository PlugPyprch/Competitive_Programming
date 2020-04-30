#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum = 0;
    string dec;
    cin >> n;
    while(n--){
        cin >> dec;
        if(dec == "Tetrahedron")
            sum += 4;
        else if(dec == "Cube")
            sum += 6;
        else if(dec == "Octahedron")
            sum += 8;
        else if(dec == "Dodecahedron")
            sum += 12;
        else if(dec == "Icosahedron")
            sum += 20;
    }
    cout << sum;
}
