#include <iostream>
using namespace std;
//Prime Factor Finder
int findprimefactors(long long number=0);
int main()
{
    int answer=findprimefactors(600851475143);
    cout << "Largest prime factor of the number is "<< answer ;
    
}
int findprimefactors(long long number) {
    long long max_prime=-1;
    
    if (number % 2 == 0) {
        max_prime = 2;
        number /= 2;
    }
    if (number% 3 == 0) {
        max_prime = 3;
        number /= 3;
    }

    for (long long  i = 5; i < number; i+=6) {
        if (number % i == 0) {
            max_prime = i;
            number /= i;
        }
        else if (number % (i + 2) == 0) {
            max_prime = i + 2;
            number /= (i+2);
        }
     }
    
    if (number > 4) {
        max_prime = number;
   }
    return max_prime;
    
    
   
}
