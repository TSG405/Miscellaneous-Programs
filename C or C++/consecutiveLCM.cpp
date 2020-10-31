#include <bits/stdc++.h> 
using namespace std; 
#define MAX 1000
// array to store all prime less than and equal to 10^6 
vector <int> primes; 
  
// utility function for sieve of sieve of Eratosthenes 
void sieve() 
{ 
    bool isComposite[MAX] = {false}; 
    for (int i=2; i*i<=MAX; i++) 
    { 
        if (isComposite[i]==false) 
            for (int j=2; j*i<=MAX; j++) 
                isComposite[i*j] = true; 
    } 
  
    // Store all prime numbers in vector primes[] 
    for (int i=2; i<=MAX; i++) 
        if (isComposite[i]==false) 
            primes.push_back(i); 
} 
  
// Function to find LCM of first n Natural Numbers 
long long LCM(int n) 
{ 
    long long lcm = 1; 
    for (int i=0; i<primes.size() && primes[i]<=n; i++) 
    { 
        // Find the highest power of prime, primes[i] 
        // that is less than or equal to n 
        int pp = primes[i]; 
        while (pp*primes[i] <= n) 
            pp = pp *primes[i]; 
  
        // multiply lcm with highest power of prime[i] 
        lcm *= pp; 
        lcm %= 1000000007; 
    } 
    return lcm; 
} 
  
// Driver code 
int main() 
{ 
    sieve();
    int t;
    cin >> t;
    long int ans[t];
    for(int i=0;i<t;i++)
    {
        cin >> ans[i];
        ans[i] =  LCM(ans[i]);
    }
    return 0;
}
