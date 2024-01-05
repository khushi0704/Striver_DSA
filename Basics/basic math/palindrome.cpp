bool palindrome(int n)
{
    // same when you reverse 
    int dummy = n;
    int reversed=0;
    while(dummy){
        int rem = dummy%10;
        reversed = reversed*10 + rem;
        dummy=dummy/10;
    }
    if(reversed==n){
        return true;
    }
    return false;
}