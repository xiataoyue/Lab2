/*
 * Lab2 Ex1 VE280 20SU
 * Created by: Yiqing Fan
 * Last update: May 25, 2020
 */

#include <iostream>

using namespace std;

#define RANGE 100000

bool isPrime[RANGE + 1];

// MODIFIES: isPrime[]
// EFFECTS: fill in isPrime[], true for prime, false otherwise
void generateIsPrime() {
    // TODO: implement Eratosthenes Sieve Algorithm
    int i, j;
    for(i = 0; i <= RANGE; i++){
    	isPrime[i] = true;
    }
    
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(i = 2; i <= RANGE; i++){
    	if(isPrime[i] == false) continue;
    	for(j = 2; j <= RANGE/i; j++){
    	    isPrime[i*j] = false;
    	}
    }
}

int main() {
    int n;
    int i;

    // TODO: generate lookup table
    generateIsPrime();

    // TODO: read input and check if each num is prime
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
    	cin >> arr[i];
    }
    
    for(i = 0; i < n; i++){
        if(isPrime[arr[i]] == true){
            cout << arr[i] << " ";
        }
    }


    return 0;
}
