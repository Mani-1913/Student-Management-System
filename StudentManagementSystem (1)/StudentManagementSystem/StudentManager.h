#ifndef SM_H
#define SM_H
#include <vector>
#include "Student.h"
class StudentManager{
 std::vector<Student> students;
 public:
 void addStudent(); void displayStudents(); void saveToFile();
};
#endif