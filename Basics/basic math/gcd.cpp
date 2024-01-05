int calcGCD(int n, int m){
    int small =(n<m)?n:m;
    for(int i=small;i>1;i--){
        if(n%i==0 && m%i==0){
            return i;
            break;
        }
    }
    return 1;
}