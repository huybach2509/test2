#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char n;
		cin >> n;
		if(n>='a' && n<='z'){
			cout << (char)toupper(n) << endl;
		} else {
			cout << (char)tolower(n) << endl; 
		}
	}
	return 0;
}

