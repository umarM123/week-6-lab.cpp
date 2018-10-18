#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    int grade_num;
    cout<< "Please enter a grade:"<< endl;
    cin>> grade_num;




 
      if ( grade_num<50)
        cout<< "The letter grade is F"<< endl;
    else if (grade_num<=60)
        cout<< "The letter grade is d"<< endl;
    else if (grade_num<=72)
        cout<< "The letter grade is c"<< endl;
    else if (grade_num<=86)
        cout<< "The letter grade is b"<< endl;
        else
        cout<<"The letter grade is a"<< endl;
return 0;
}

