#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class Student{
 int id; string name; int age; string course; float marks; int attendance;
 public:
 Student(){}
 Student(int i,string n,int a,string c,float m,int att):id(i),name(n),age(a),course(c),marks(m),attendance(att){}
 int getId(){return id;} string getName(){return name;} float getMarks(){return marks;}
 void display();
 string serialize();
};
#endif