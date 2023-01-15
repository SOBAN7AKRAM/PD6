#include <iostream>
using namespace std;
string signs(int day,string month);
main ()
{
    int days;
    string month,result;
    cout<<"Enter date:";
    cin>>days;
    cout<<"Enter month:";
    cin>>month;
    result=signs(days,month);
    cout<<"Zodiac Sign:"<<result;
}
string signs(int days,string month)
{
    string Asigns;
    if ((month =="March" && days>=21) || (month=="April" && days<=19))
    {
       Asigns="Aries";
    }
    else if ((month =="April" && days>=20) || (month=="May" && days<=20))
    {
        Asigns="Taurus";
    }
     else if ((month =="May" && days>=21) || (month=="june" && days<=20))
    {
        Asigns="Gemini";
    } 
    else if ((month =="June" && days>=21) || (month=="July" && days<=22))
    {
        Asigns="Cancer";
    }
    else if ((month =="July" && days>=23) || (month=="August" && days<=22))
    {
        Asigns="Leo";
    }
    else if ((month =="August" && days>=23) || (month=="September" && days<=22))
    {
        Asigns="Virgo";
    }
    else if ((month =="September" && days>=23) || (month=="October" && days<=22))
    {
        Asigns="Libra";
    }
    else if ((month =="October" && days>=23) || (month=="November" && days<=21))
    {
        Asigns="Scorpio";
    } 
    else if ((month =="November" && days>=22) || (month=="December" && days<=21)) 
    {
        Asigns="Sagitarius";
    }
    else if ((month =="December" && days>=22) || (month=="January" && days<=19))
    {
        Asigns="Capicorn";
    } 
    else if ((month =="January" && days>=20) || (month=="February" && days<=18))
    {
        Asigns="Aquarius";
    }
    else if ((month =="February" && days>=18) || (month=="March" && days<=20)) 
    {
        Asigns="Pisces";
    }
    return Asigns;
}