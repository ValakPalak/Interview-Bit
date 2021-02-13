int Solution::isPalindrome(string A) {
    string B;
    for(int i = 0; i < A.length(); i++){
        char c = A[i];
        if((c>='0' && c<='9') || (c>='A' && c<='Z') || (c>='a' && c<='z')){
            if(c>='A' && c<='Z'){
                c = (char)(c + 32);
            }
            B.push_back(c);
        }
    }
    int m = 0;
    int n = B.length() - 1;
    while(n>m){
        
        if(B[m] != B[n]){
            return 0;
        }
        else{
            m++; n--;
        }
    }
    return 1;
}
