int Solution::solve(string A) {
    long long m = 1000000007;
    long long n = A.length();
    
    long long count = 0, vow = 0, con = 0;
    
    for(long long i = 0; i < n; i++){
        if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'){
            vow++;
            count = (count + con)%m;
        }
        else {
            con++;
            count = (count + vow)%m;
        }
    }

    return count;
}
