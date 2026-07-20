#include "Student.h"
void Student::display(){ cout<<id<<" "<<name<<" "<<course<<" "<<marks<<endl; }
string Student::serialize(){ return to_string(id)+","+name+","+course; }