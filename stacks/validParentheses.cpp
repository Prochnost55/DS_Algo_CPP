#include <iostream>
#include <stack>

bool isValid(string s) {
    stack<char> m;
    for (int i=0; i<s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            m.push(s[i]);
        }else{
            switch(m.top()){
                case '(':
                    if(s[i] != ')'){
                        return false;
                    }
                    break;
                case '{':
                    if(s[i] != '}'){
                        return false;
                    }
                    break;
                case '[':
                    if(s[i] != ']'){
                        return false;
                    }
                    break;
                }
            m.pop();
        }
    }
    return m.size() == 0;
}


int main(
    string s = "({}[]()(()))";
    cout << isValid(s) << endl;
)