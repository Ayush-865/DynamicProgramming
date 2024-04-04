/*
    Fibonacci Series using Tabulation
    Tabulation is the process of storing the result of a subproblem and using it later on to find the result of the bigger problem.
    In this method, we store the result of the subproblem in an array and use it later on to find the result of the bigger problem.
    The time complexity of this method is O(n) and the space complexity is O(n).
    The optimized version of this method uses only two variables to store the result of the subproblem.
    The time complexity of this method is O(n) and the space complexity is O(1).
*/

#include <bits/stdc++.h>
using namespace std;

long long tabulation(int n, vector<long long> &tab)
{
    tab[0] = 0;
    tab[1] = 1;
    for (int i = 2; i <= n; i++)
        tab[i] = tab[i - 1] + tab[i - 2];
    return tab[n];
}

long long optimisedTabulation(int n){
    long long a=0, b=1, c;
    for(int i=2; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    int n, choice=-1;
    cout << "Enter the number whose Fibonacci is to be find: ";
    cin >> n;
    vector<long long> tab(n + 1, -1);
    tab[0] = 0;
    tab[1] = 1;
    cout << "Enter 1 for tabulation and 2 for optimized tabulation: ";
    cin >> choice;
    if(choice==1)
        cout << "The fibonacci value of " << n << " is " << tabulation(n,tab) <<endl;
    else
        cout << "The fibonacci value of " << n << " is " << optimisedTabulation(n) <<endl;
    return 0;
}