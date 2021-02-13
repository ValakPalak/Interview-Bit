string Solution::longestCommonPrefix(vector<string> &A) {
    string str = A[0];
    for(int i = 1; i < A.size(); i++){
        if(A[i].length() < A[i-1].length()){
            str = A[i];
        }
    }
    
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < str.length(); j++){
        
            if(A[i][j] != str[j]){
                
                while(str.length() != j){
                    str.pop_back();
                }
                
            }
        }
    }
    return str;
}
