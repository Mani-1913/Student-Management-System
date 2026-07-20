#include "StudentManager.h"
#include <fstream>
using namespace std;
void StudentManager::addStudent(){
 int id,a,att; string n,c; float m;
 cin>>id>>n>>a>>c>>m>>att;
 students.push_back(Student(id,n,a,c,m,att));
 saveToFile();
}
void StudentManager::displayStudents(){ for(auto &s:students) s.display(); }
void StudentManager::saveToFile(){
 ofstream f("students.txt");
 for(auto &s:students) f<<s.serialize()<<endl;
}