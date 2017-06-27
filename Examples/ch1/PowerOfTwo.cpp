/*
* File: PowerOfTwo.cpp
* =====================
* This program generates a list to power of 2
* upto an exponent limit enterd by the user.
*/

#include <iostream>
using namespace std;

/* Function Prototypes */
int raiseToPower(int n, int k);

/* Main Program */

int main(){
    int limit;
    cout << "This program prints a lists power of 2" << endl;
    cout << "Please enter a exponent : ";
    cin >> limit;

    for(int i = 0; i <= limit; i++){
        cout << "2 of " << i << " is : " << raiseToPower(2, i) << endl;
    }
    return 0;
}

/*
* Function : raiseToPower
* Usage : int p = raiseToPower(int n, int k);
* ============================================
* This function raise n to the kth power and return the result;
*/

int raiseToPower(int n, int k){
    int result = 1;
    for(int i = 0; i < k; i++){
        result *= n;
    }
    return result;
}
