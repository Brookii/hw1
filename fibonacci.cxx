#include <iostream>

using namespace std;

int main(){
int N = 0, b = 0, c = 1, a = 0;

cout << "Enter the number you want to Fibonacci" << endl;
cin >> N;

for(int i = 0; i < N-1; i++){ // N - 1, da bei 9 Durchläufen das 10. Element errechnet wird
	a = b + c;
	b = c;
	c = a;
}

cout << "Your result is " << a << endl;
return 0;
}
