long long sumFirstN(long long n) {
    if(n==0){
        return 0;
    }
    int sum = sumFirstN(n-1);
    return sum+n;
}

// alternative = formula = n(n+1)/2