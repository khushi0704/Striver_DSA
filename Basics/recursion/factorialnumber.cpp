long long factorial(long long x){
    if(x==0 || x==1){
        return 1;
    }
    return x*factorial(x-1);
}
vector<long long> factorialNumbers(long long n) {
    vector<long long> result;
    int i=1;
    long fact = factorial(i);
    while(fact<=n){
        result.push_back(fact);
        i++;
        fact = factorial(i);
    }
    return result;
}