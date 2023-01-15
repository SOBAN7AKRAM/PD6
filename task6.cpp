#include <iostream>
using namespace std;
float apartment(string month,float stays);
float studio(string month,float stays);
main ()
{
    float stays,result;
    string month;
    cout<<"Enter month of stay:";
    cin>>month;
    cout<<"Enter days of stay:";
    cin>>stays;
    result=apartment(month,stays);
    cout<<"Apartment:"<<result<<"$"<<endl;
    result=studio(month,stays);
    cout<<"Studio:"<<result<<"$"<<endl;


}
float studio(string month,float stays)
{
    float price;
    if (month=="May" || month=="October")
    {
        if (stays<=7)
        {
            price=stays*50;
        }
        else if (stays>7 && stays<=14)
        {
            price=(stays*50)-((stays*50)*0.05);
        }
        else if (stays>14)
        {
            price=(stays*50)-((stays*50)*0.30);
        }
    }
    else if (month=="June" || month=="September")
    {
        if (stays<=14)
        {
            price=stays*75.20;
        }
        else if (stays>14)
        {
            price=(stays*75.20)-((stays*75.20)*0.20);
        }
    }
    else if (month=="July" || month=="August")
    {
        price=stays*76;
    }
    return price;
}
float apartment(string month,float stays)
{
    float price;
    if (stays<=14)
    {
       if (month=="May" || month=="October")
       {
        price=stays*65;
       }
       else if (month=="June" || month=="September")
       {
        price=stays*68.70;
       } 
       else if (month=="July" || month=="August")
       {
        price=stays*77;
       } 
    }
    else if (stays>14)
    {
       if (month=="May" || month=="October")
       {
        price=(stays*65)-((stays*65)*0.10);
       }
       else if (month=="June" || month=="September")
       {
        price=(stays*68.70)-((stays*68.70)*0.10);
       } 
       else if (month=="July" || month=="August")
       {
        price=(stays*77)-((stays*77)*0.10);
       }  
    }
    return price;
}