
#include <iostream>
    using namespace std;

    int findPalindrome(int n);
    int main()
    {
        int largestPalindrome = 0;

        for (int a = 100; a < 1000; a++) {
            for (int b = a; b < 1000; b++) {
                int product = a * b;
                if (findPalindrome(product)) {
                    if (product > largestPalindrome) {
                        largestPalindrome = product;
                    }
                }
            }
        }

        cout << "Largest palindrome product: " << largestPalindrome << endl;

        return 0;
    }

    int findPalindrome(int n) {
        int reverse = 0;
        int temp = n;
        while (temp != 0) {
            reverse = (reverse * 10) + (temp % 10);
            temp /= 10;
        }
        return (reverse == n);
    }

    

   

