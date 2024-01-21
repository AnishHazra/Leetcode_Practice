class Solution {
public:
    int fibo(int n){
        //base case
        if(n == 0 or n == 1){
            return n;
        }
        //recursive case
        int f1 = fibo(n-1);
        int f2 = fibo(n-2);
        return f1+f2;
    }
    int fib(int n) {
        return fibo(n);
    }
};