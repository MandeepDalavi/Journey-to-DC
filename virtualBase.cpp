//Program Coded by SE BE Comp. Eng. student, Mandeep M Dalavi roll no. 13
#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        double stud_rollno = 0;
        string name = "";
        void in(){
            cout<<"Enter Student Name: ";
            cin>>name;
            cout<<"Enter Student Roll No: ";
            cin>>stud_rollno;
        }
        void out(){
            cout<<"Student Name: "<<name<<endl;
            cout<<"Roll No: "<<stud_rollno<<endl;
        }
};

class Marks : public virtual Student{
    public:
        double marks[5];
        void get(){
            cout<<"Enter marks of 5 subject separated by space: ";
            for(int i=0; i<5; i++)
                cin>>marks[i];
        }
        void put(){
            cout<<"Marks of student: ";
            for(int i=0; i<5; i++)
                cout<<marks[i]<<" ";
            cout<<endl;
        }
};

class Sportmarks : public virtual Student{
    public:
        double spmarks = 0;
        void input(){
            cout<<"Enter Sports marks: ";
            cin>>spmarks;
        }
        void output(){
            cout<<"Sports marks: "<<spmarks<<endl;
        }
};

class Result : public Marks, public Sportmarks{
    public:
        double total = 0;
        double percentage = 0;
        double marks_sum = 0;
        int n = sizeof(marks)/sizeof(marks[0]);
        void calResult(){
            for(int i=0; i<n; i++)
                marks_sum += marks[i];
            total = marks_sum + spmarks;
            percentage = total/(n+1);
            if(percentage>40)
                cout<<"Student Result: PASS"<<endl;
            else
                cout<<"Student Result: FAIL"<<endl;
        }
};

int main(){
    Result stud;
    stud.in();
    stud.get();
    stud.input();
    cout<<"\nDetails entered by you are as follows:"<<endl;
    stud.out();
    stud.put();
    stud.output();
    cout<<"\n----------- RESULTS -----------"<<endl;
    stud.calResult();
    return 0;
}