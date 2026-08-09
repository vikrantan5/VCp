

#include<iostream>

using namespace std;


class Student{ ///user defioned datatype
    public:

    string name;
    int rno;
    float percent;

    Student(string n ,int r , float p ){
        name = n;
        rno = r;
        percent =p;
    }
};



void change(Student* s){
   (*s).name = "hehe";
}
int main(){
    // int x;//declaration

    // for creating the user defind datatype

    // Student s("vikrant singh" , 45 ,56.7);

    // cout<<s.name<<endl;
    // s.name = "chacha";
    // cout<<s.name<<endl;
    // Student *ptr = &s;
    // change(ptr);
    // cout<<s.name;

    // s.name = "vikrant singh";
    // s.percent = 21.88;
    // s.rno = 5;
    //baar baar user defined k data type ko initiallized karne k liye constructor



    Student* s1=new Student("vikrant singh" , 45,56.5);
    
    cout<<s1->name;

    

}