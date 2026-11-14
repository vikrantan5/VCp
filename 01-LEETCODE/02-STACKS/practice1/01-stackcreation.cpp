

//st.push()
//st.pop()
//st.top()

//if i add or delete from an index in any posiiotn this take O(n)

// LIFO

//give disciplined to data structrue

//stl for stck

// stcack<int>st;

// st.size();
// st.is
// st.empty()
// st.push()
// st.pop()
// st.top()

#include<iostream>
#include<stack>

using namespace std;



// void recStack(stack<int>&st){

//     if(st.empty()){
//         return;
//     }

//     int temp = st.top();
//     st.pop();
//     recStack(st);
//    cout<<temp<<endl;
//    st.push(temp);

// }

int main(){

    stack<int>st;

    // cout<<st.size()<<endl;
    // st.push(45);
    // cout<<st.size()<<endl;

    // st.push(5);
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;    


    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);



    //using tw0o array
    // stack<int>temp;

    // while(!st.empty()){
    //     temp.push(st.top());
    //     st.pop();

    // }

    // while(!temp.empty()){
    //     cout<<temp.top()<<endl;
    //     st.push(temp.top());
    //     temp.pop();
    // }

    // recStack(st);



    // reverse a linkeeliat


    stack<int>rev;
    stack<int>nor;
    while(!st.empty()){
        rev.push(st.top());
        st.pop();
    }

    while(!rev.empty()){
        nor.push(rev.top());
        rev.pop();

    }

    while(!nor.empty()){
        st.push(nor.top());
        nor.pop();
    }





    return 0;
}




// element get --->arr-O(1)
//                 linkedlist-->O(n);
//                 stack-->O(n)