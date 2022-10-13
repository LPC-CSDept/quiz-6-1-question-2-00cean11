#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
void getInput(int &n1, int &n2, int &n3){
	cout << "Input 3 normal integar numbers\n";
	cin >> n1 >> n2 >> n3;
}
int findMin(int n1, int n2, int n3){
	int min1, min2, min3;
	if (n1 < n2 && n1 < n3){
		if (n2 < n3){
			min1 = n1;
			min2 = n2;
			min3 = n3;
		} else {
			min1 = n1;
			min2 = n3;
			min3 = n2;
		}
	} else if (n2 < n1 && n2 < n3){
		if (n1 < n3){
			min1 = n2;
			min2 = n1;
			min3 = n3;
		} else {
			min1 = n2;
			min2 = n3;
			min3 = n1;
		}
	} else if (n3 < n1 && n3 < n2){
		if (n1 < n2){
			min1 = n3;
			min2 = n1;
			min3 = n2;
		} else {
			min1 = n3;
			min2 = n2;
			min3 = n1;
		}
	}
	n1 = min3;
	n2 = min2;
	n3 = min1;
	return n1, n2, n3;
}
void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}
// ******************************
int main(){
	int n1, n2, n3, min;
	getInput(n1, n2, n3);
	min = findMin(n1, n2, n3);
	printResult(n1, n2, n3, min);
}
// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format
