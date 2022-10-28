class Solution{
public:
    vector<string>fop;
    void solve (string S, string op){
        if(S.size()==0){
           fop.push_back(op);
           return;
        }
        else{
            string op1=op;
            string op2=op;
            
            op1.push_back(S[0]);
            op2.push_back(' ');
            op2.push_back(S[0]);
            S.erase(S.begin()+0);
            solve(S,op2);
            solve(S,op1);
        }
    }
    vector<string> permutation(string S){
        // Code Here
        
        string op="";
        op.push_back(S[0]);
        S.erase(S.begin()+0);
        solve(S,op);
        
        return fop;
        
    }
};