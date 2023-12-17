#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<string> d = {"Kuku", "Kuku", "Kaki", "Kaki", "Kakak", 
	"Kakak", "Kakek", "Kakekku", "Kok", "Kaku", "Kaku"};
	
	int n;
	cin >> n;
	int x;
	for(int i = 0; i < n; i++){
		cin >> x;
		if (x <= 4) {
			cout << "Kuku";
		} else if (x <= 8) {
			cout << "Kaki";
		} else if (x <= 14) {
			cout << "Kakak";
		} else if (x <= 17) {
			cout << "Kakek";
		} else if (x <= 21) {
			cout << "Kakekku";
		} else if (x <= 23) {
			cout << "Kok";
		} else cout << "Kaku";
		cout << '\n';
	}
}