#include <iostream>
using namespace std;
float totalmarks(int num1,int num2,int num3,int num4,int num5);
float percentage(float totalnumber);
string grade(float totalPer);
main ()
{ 
    int num1,num2,num3,num4,num5;
    string name,lastGrade;
    float totalPercentage,totalnumber;
    cout <<"Enter student name:";
    cin >>name;
    cout <<"Enter obtained marks in English:";
    cin>>num1;
    cout<<"Enter obtained marks in Math:";
    cin>>num2;
    cout<<"Enter obtained marks in Chemistry:";
    cin>>num3;
    cout<<"Enter obtained marks in Social Science:";
    cin>>num4;
    cout<<"Enter obtained marks in Biology:";
    cin >>num5;
    totalnumber=totalmarks(num1,num2,num3,num4,num5);
    totalPercentage=percentage(totalnumber);
    lastGrade=grade(totalPercentage);
    cout <<"Student name:"<<name<<endl;
    cout <<"Total Obtained Marks:"<<totalnumber<<endl;
    cout<<"Total percentage:"<<totalPercentage<<endl;
    cout<<"Student Grade:"<<lastGrade<<endl;
}
float totalmarks(int num1,int num2,int num3,int num4,int num5)
{
   float total;
   total=num1+num2+num3+num4+num5;
   return total;
}
float percentage(float totalnumber)
{
    float totalPer = (totalnumber*100)/500;
    return totalPer;
}
string grade(float totalPer)
{
    string totalGrade;
    if (totalPer<40)
    {
        totalGrade="F";
    }
    else if (totalPer>=40 && totalPer<50)
    {
        totalGrade="D";
    }
    else if (totalPer>=50 && totalPer<60)
    {
        totalGrade="C";
    }
    else if (totalPer>=60 && totalPer<70)
    {
        totalGrade="B";
    }
    else if (totalPer>=70 && totalPer<80)
    {
        totalGrade="B+";
    }
    else if (totalPer>=80 && totalPer<90)
    {
        totalGrade="A";
    }
    else if (totalPer>=90 && totalPer<=100)
    {
        totalGrade="A+";
    }
    return totalGrade;
}