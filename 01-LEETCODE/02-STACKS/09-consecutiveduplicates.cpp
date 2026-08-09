#include<iostream>
#include<stack>
using namespace std;


string removeDup(string s){
    stack<char>st;
    char temp =' ';
    string news = "";
    for(int i = s.size()-1 ; i>=0 ;i--){
        st.push(s[i]);
    }

    while (!st.empty())
    {
        if(news.size()==0){
            temp= st.top();
            news.push_back(temp);
            st.pop();
        }
        
        else if(st.top()==temp){
            st.pop();

        }
        else{
            temp = st.top();
            news.push_back(temp);
            st.pop();
            
        }


    }
    return news;
    

}

int main(){
    string s= "aaabsssdddddffffghhhhhtttrrrrrr";
    cout <<removeDup(s);
}