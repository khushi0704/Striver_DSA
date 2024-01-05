int divisor(int n){
    int sum = 0;
    for(int i=1; i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int sumOfAllDivisors(int n){
    int finalSum=0;
    for(int i=1; i<=n; i++){
        finalSum += divisor(i);
    }
    return finalSum;
}