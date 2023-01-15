#include <iostream>
using namespace std;
  string output;
    float percentage,total; 
string record(int marks1,int marks2,int mark3,int marks4,int marks5);
main()
{
    int marks1, marks2, marks3, marks4, marks5;
    string name;
    cout<<"enter student name:";
    cin>>name;
    cout<<"enter first subject marks:";
    cin>>marks1;
    cout<<"enter second subject marks:";
    cin>>marks2;
    cout<<"enter 3rd subject marks:";
    cin>>marks3;
    cout<<"enter 4th subject marks:";
    cin>>marks4;
    cout<<"enter 5th subject name:";
    cin>>marks5;
    
    string result = record(marks1,marks2,marks3,marks4,marks5);
        cout << "name"<< name << "  and total marks are___" << total << "and percentage is____"<< percentage<<"and Grade is__" << result;
}

string record(int marks1,int marks2,int marks3,int marks4,int marks5)
{
  
    total=(marks1+marks2+marks4+marks3+marks5);
    percentage=((marks1+marks2+marks4+marks3+marks5)*0.2);
    if(percentage >=90 && percentage <= 100)
    {
            output="A+";
    }
     if(percentage >=80 && percentage <= 90)
    {
        output="A";
     }

     if(percentage >=70 && percentage <= 80)
    {
        output="B+";

    }
     if(percentage >=60 && percentage <= 70)
    {
        output="B";
    }
     if(percentage >=50 && percentage <= 60)
    {
        output="C";
    }
     if(percentage >=40 && percentage <= 50)
    {
        output="D";
    }
     if( percentage < 40)
    {
        output="F";
    }
        return output;
}