#include <iostream>

using namespace std;

int main()
{
    int mark;
    cout << "Enter your mark:";
    cin >> mark;

    if ((mark >=80) && (mark <=100))
         {

             cout<< "Grade = " << "A" << endl;
         }
         else if ((mark >= 75) && (mark <= 79))
         {
             cout << "Grade = " << "B+" << endl;
         }else if ((mark >= 70) && (mark <= 74))
         {
             cout << "Grade = " << "B" << endl;
         }
         else if ((mark >= 65) && (mark <= 69))
         {
             cout << "Grade = " << "C+" << endl;
         }
         else if ((mark >= 60) && (mark <= 64))
         {
             cout << "Grade = " << "C" << endl;
         }
         else if ((mark >= 55) && (mark <= 59))
         {
             cout << "Grade = " << "D+" << endl;
         }
         else if ((mark >= 50) && (mark <= 54))
         {
             cout << "Grade = " << "D" << endl;
         }
         else if ((mark >= 45) && (mark <= 49))
         {
             cout << "Grade = " << "E" << endl;
         }
         else if ((mark >= 0) && (mark <= 44))
         {
             cout << "Grade = " << "F" << endl;
         }
         else{
                cout <<"Invalid!" << endl;
         }
     return 0;
}






