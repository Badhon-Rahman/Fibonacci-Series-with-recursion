#include <iostream>

using namespace std;

int FibonacciSeries(int n){
     if(n <= 1){
        return n;
     }
     else{
        return FibonacciSeries(n - 2) + FibonacciSeries(n - 1);
     }
}

int main()
{
    int findFibonacci;
    int i = 0;

    cout << "Enter Fibonacci series limit:";
    cin >> findFibonacci;

    while(i < findFibonacci){
        cout << FibonacciSeries(i) << " ";
        ++i;
    }
    return 0;
}
