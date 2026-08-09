#include<iostream>
#include<stack>
#include<unordered_map>
#include <string>

using namespace std;

int main(){

        stack<int>val;
        stack<char>op;
        unordered_map<char, int>mp;
        mp['+'] = 1;
        mp['-'] = 1;
        mp['/'] = 2;
        mp['*'] = 2;

        string s = "2+6*4/8-3";

        int i = 0;
        while(i<s.size()){
            if(s[i]=='+' ||s[i]=='*' || s[i]=='/' || s[i]=='-'){
                if(op.empty()){
                    op.push(s[i]);

                }
                else if(mp[op.top()] < mp[s[i]]){
                    op.push(s[i]);
                }
                else{
                    while(!op.empty() && mp[op.top()] >= mp[s[i]]){
                        char ch = op.top();
                        op.pop();
                        int val2 = val.top();
                        val.pop();
                        int val1 = val.top();
                        val.pop();
                        int n;
                        if(ch=='+'){
                            n = val1+val2;
                        }
                        else if(ch=='-'){
                            n=val1-val2;
                        }
                        else if(ch=='*'){
                            n=val1*val2;
                        }
                        else if(ch=='/'){
                            n=val1/val2;
                        }

                        val.push(n);
                       
                    }
                     op.push(s[i]);
                }

            }
            else{
                val.push(s[i] - '0');
            }
            i++;
        }
        
        while(!op.empty()){
                        char ch = op.top();
                        op.pop();
                        int val2 = val.top();
                        val.pop();
                        int val1 = val.top();
                        val.pop();
                        int n;
                        if(ch=='+'){
                            n = val1+val2;
                        }
                        else if(ch=='-'){
                            n=val1-val2;
                        }
                        else if(ch=='*'){
                            n=val1*val2;
                        }
                        else if(ch=='/'){
                            n=val1/val2;
                        }

                        val.push(n);
                    }


                        cout<<val.top();
        
}