
#include <iostream>
using namespace std;
int findsumofsquares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        
        sum += i * i;
       
    }
    return sum;
    
}
int findthesquareofthesum(int n) {
    int sum2 = 0;
    for (int i = 1; i <=n; i++) {
        
        sum2 += i;
        
    }
    return sum2 * sum2;
}
int main()
{
    int result = findthesquareofthesum(100)-findsumofsquares(100);
    cout << result;
}
