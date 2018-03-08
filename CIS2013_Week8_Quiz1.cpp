#include <iostream>
using namespace std;

//void get_input(int num_1);

int findQuarters (int x) {
	return (x/25);
	}
int findDimes (int x) {
	return ((x%25)/10);
}
int findNickels (int x) {
	return (((x%25)%10)/5);
}
 int findPennies (int x) {
	 return (((x%25)%10)%5);
 }

int main () {
	int change = 0;
	cout << "Give me amount of cents \n";
	cin >> change ;
	//int cents;
	//get_input (cents);
	
	cout << "You would have " << findQuarters(change) << " quarters" << endl;
	cout << "You would have " << findDimes(change) << " dime(s)" << endl;
	cout << "You would have " << findNickels(change) << " nickels" << endl;
	cout << " and " << findPennies(change) << " penny(s)" << endl;

	// int rem1 = cents%25;
	// int rem2 = rem1%10;
	// int rem3 = rem2%5;
	// int q=cents/25;
	// int d=rem1/10;
	// int n=rem2/5;
	// int p=rem3;
	
	// cout << q << "quarters" << endl;
	// if (rem1!=0) {
		// cout << d << "dimes" << endl;
	// }
	
	// if (rem2!=0) {
		// cout << n << "nickels" << endl;
	// }
	// cout << p << "pennies" << endl;
	
	
return 0;
	}




// void get_input (int num_1) {
	
	// cout << "Give me amount of cents \n";
		// cin >> num_1;
			
// }