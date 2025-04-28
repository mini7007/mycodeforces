#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		
		if(x < 4){
			cout << x << "\n";
		}
		else{
			cout << 2 << "\n";
		}
	}
}
