#include<bits/stdc++.h>
using namespace std;

int main(){
		long long int money,sum = 0,ms = 0;
		cin >> money;
		
		while(money >= 100){
			ms = money / 100;
			money %= 100;
			sum += ms;
		}
		while(money >= 20){
			ms = money / 20;
			money %= 20;
			sum += ms;
		}
		while(money >= 10){
			ms = money / 10;
			money %= 10;
			sum += ms;
		}
		while(money >= 5){
			ms = money / 5;
			money %= 5;
			sum += ms;
		}
		while(money >= 1){
			ms = money / 1;
			money %= 1;
			sum += ms;
		}
		cout << sum;
}
