#include<bits/stdc++.h>
using namespace std;

int main(){
		string a,b;
		int j=5,i=0;
		char n,l;

		cin >> a;
		n = a[0];
		l = a[1];
	
		while(j--){
			cin >> b;
			if((b[0] == n) || (b[1] == l)){
				i++;
			}
		}
		if(i>0)
			cout << "YES";
		else
			cout << "NO";
}
