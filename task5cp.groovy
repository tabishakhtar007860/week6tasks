#include <iostream.
using namespace std;
main()
{
    string day,fruit;
    float quantity,price;
    cout<<"enter day:";
    cin>> day;
    cout<<"enetr fruit name:";
    cin>>fruit;
    cout<<"enter quantity:";
    cin>>quantity;
    if(day == "sunday")
    {
        if(fruit == "banana")
        {
            cout<<quantity*2.70;
        }
        else if(fruit == "apple")
        {
            cout<<quantity*1.25;
        }
        else if(fruit == "orange")
        {
            cout<<quantity*0.9;
        }
         else if(fruit == "grapefruit")
        {
            cout<<quantity*1.60;
        }
        else if(fruit == "kiwi")
        {
            cout<<quantity*3;
        }
     else if(fruit == "pineapple")
        {
            cout<<quantity*5.6;
        }
        else if(fruit == "grapes")
        {
            cout<<quantity*4.20;
        }
       
    }
 if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday")
 {    if(fruit == "banana")
        {
            cout<<quantity*2.50;
        }
        else if(fruit == "apple")
        {
            cout<<quantity*1.2;
        }
        else if(fruit == "orange")
        {
            cout<<quantity*0.85;
        }
         else if(fruit == "grapefruit")
        {
            cout<<quantity*1.45;
        }
        else if(fruit == "kiwi")
        {
            cout<<quantity*2.70;
        }
     else if(fruit == "pineapple")
        {
            cout<<quantity*5.50;
        }
        else if(fruit == "grapes")
        {
            cout<<quantity*3.85;
        }

 }
    else
     {
        cout<< "error";
    }

}