#include <iostream>
#include "StudentManager.h"
using namespace std;
int main(){
 StudentManager m; int ch;
 while(true){
  cout<<"1 Add 2 Display 3 Exit\n"; cin>>ch;
  if(ch==1) m.addStudent();
  else if(ch==2) m.displayStudents();
  else break;
 }
}