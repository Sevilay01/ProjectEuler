

#include <iostream>
using namespace std; 


int recursive(int least, int most, int sum = 0) {
	if (least > most) {
		return sum;
	}
	else if (least % 3 == 0 || least % 5 == 0) {
	      sum += least;

	}
	return recursive(least + 1, most, sum);

}
int main()
{   //Sum of 3 or 5 multiples below 1000
	/* int sum = 0;
	for (int i = 0; i < 1000; i++) {
		if(i % 3 == 0&&i%5!=0) {
			int threessmultiples = i;
			sum += i;
		}
		else if (i % 5== 0&&i%3!=0) {
			int fivesmultiples = i;
			sum += i;
		}
		else if (i % 5 == 0 && i % 3 == 0) {
			int bothmultiples = i;
			sum += i;
		}
	}
	cout << sum;
	*/
	//Sum of 3 or 5 multiples below 1000
	/*int sum = 0;
	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			int threessmultiples = i;
			sum += i;
		}
		
		
	}
	cout << sum;
	*/
	int result= recursive(0,999,0);
	cout << result;
}

