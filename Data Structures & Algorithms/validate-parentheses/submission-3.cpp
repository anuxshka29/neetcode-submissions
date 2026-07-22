class Solution {
public:
    bool isValid(string s) {
       std::stack<char> bracket;
       for(int i=0;i<s.length();i++){
        if(s[i]=='['||s[i]=='{'||s[i]=='('){
            bracket.push(s[i]);
        }
        if(s[i]==']'){
            if(bracket.empty())
                    return false;
            if(bracket.top()=='['){
                bracket.pop();}
                else return false;
            }
        
        if(s[i]=='}'){
            if(bracket.empty())
                    return false;
            if(bracket.top()=='{'){
                bracket.pop();}
                else return false;
            }
        
        if(s[i]==')'){
            if(bracket.empty())
                    return false;
            if(bracket.top()=='('){
                bracket.pop();}
                else return false;
            }
        

       }

     return bracket.empty();
        
    }
};
