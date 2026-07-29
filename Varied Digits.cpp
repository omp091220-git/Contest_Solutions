#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin>>num;
	int temp = num/10;
	num=num%10;
	if (num==temp){cout<<"No";}
	else{cout<<"Yes";}
}
