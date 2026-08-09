#include<iostream>


using namespace std;

class Student{
    public:
    string name;
    int rno;
    float marks;
    Student(string name , int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};


void change(Student* s){
    s->name = "adfvfv";
}

int main(){

        Student s("vikrant singh" , 45 ,74.36);

        Student* ptr = &s;
        cout<<s.name<<endl;
        (*ptr).name = "chacha";
        cout<<s.name<<endl;
        change(ptr);
        cout<<s.name;

        // Student* ptr = &s;
        // cout<<s.name<<endl;
        // change(&s);
        // (*ptr).name = "harsh";
        // ptr->name = "Nisu";
        // cout<<s.name<<endl;

        // Student s= new Student("vikrant singh" , 45 ,74.36); 


}