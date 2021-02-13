string Solution::solve(string a, int b) {
    string ans;
    queue<char> v;
    v.push(a[0]);
    for(int i = 1; i < a.length(); i++){
        
        if(a[i] == v.back()){
            v.push(a[i]);
        }
        else{
            
            if(v.size() == b){
                v = queue<char>();
            }
            else{
                while(!v.empty()){
                    ans.push_back(v.front());
                    v.pop();
                }
            }
            
            
            v.push(a[i]);
        }
        
    }
    
    if(v.size() == b){
                v = queue<char>();
            }
            else{
                while(!v.empty()){
                    ans.push_back(v.front());
                    v.pop();
                }
            }
    
    return ans;
    
}
