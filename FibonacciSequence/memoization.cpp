/*
Step 0 : Initialize an empty vector with -1
Step 1 : Return if any value is stored in memoization storage
Step 2: Store new fibonacci values of new numbers as we proceed
*/

/*
Time Complexity : O(n)
Space Complexity: O(n) + O(n) [1st O(n) is for memo vector and another O(n) is for recursion stack]
*/

#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &memo)
{
    if (n <= 1)
        return n;

    if (memo[n] != -1) // Step 1
        return memo[n];

    return memo[n] = fib(n - 1, memo) + fib(n - 2, memo); // Step 2
}

int main()
{
    int n;
    cout << "Enter the number whose Fibonacci is to be find: ";
    cin >> n;
    vector<int> memo(n + 1, -1); // Step 0
    cout << "The fibonacci value of " << n << " is " << fib(n, memo);
    return 0;
}
