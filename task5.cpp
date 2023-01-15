#include <iostream>
using namespace std;
float week(string fruit,string days,float quantity);
main ()
{
    string fruit,days;
    float Tprice,quantity;
    cout <<"Enter day name:";
    cin>>days;
    cout<<"Enter fruit name:";
    cin>>fruit;
    cout <<"Enter quantity:";
    cin>>quantity;
    Tprice=week(fruit,days,quantity);
    cout <<Tprice;

}
float week(string fruit,string days,float quantity)
{
    float price;
    if (days=="Monday" || days=="Tuesday" || days=="Wednesday" ||days=="Thursday" || days=="Friday" )   
    {
        if (fruit=="banana")
        {
           price=quantity*2.50;
        }
        else if (fruit=="apple")
        {
           price=quantity*1.20;
        }
        else if (fruit=="orange")
        {
           price=quantity*0.85;
        }
        else if (fruit=="grapefruit")
        {
           price=quantity*1.45;
        }
        else if (fruit=="kiwi")
        {
           price=quantity*2.70;
        }
        else if (fruit=="pineapple")
        {
           price=quantity*5.50;
        }
        else if (fruit=="grapes")
        {
           price=quantity*3.85;
        }
        else
        {
            cout<<"error";
        }
        
    }
    else if (days=="Saturday" || days=="Sunday")
    {
        if (fruit=="banana")
        {
           price=quantity*2.70;
        }
        else if (fruit=="apple")
        {
           price=quantity*1.25;
        }
        else if (fruit=="orange")
        {
           price=quantity*0.90;
        }
        else if (fruit=="grapefruit")
        {
           price=quantity*1.60;
        }
        else if (fruit=="kiwi")
        {
           price=quantity*3.00;
        }
        else if (fruit=="pineapple")
        {
           price=quantity*5.60;
        }
        else if (fruit=="grapes")
        {
           price=quantity*4.20;
        }
        else
        {
            cout<<"error";
        }
        
    }
    else
    {
         cout<<"Error";
    }
   
    return price;
}

