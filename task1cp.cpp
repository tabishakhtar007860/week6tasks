#include <iostream>
using namespace std;
string test(string temperature,string humidity);
main()
{
string humidity,temperature;
cout<<"enter temperature:";
cin>>temperature;
cout<<"enter humidity:";
cin>>humidity;
string result = test(temperature,humidity);
cout<<result;
}
string test(string temperature,string humidity)
{
    string output; 
    if(temperature== "warm" )
    {
         if(humidity == "dry")
    {
        cout<<"play tennis";
        return  output;
    }
    if(humidity == "humid")
    {
        cout<<"swim";
        return output;
    }
    }
    if(temperature== "cold" )
    { if(humidity == "dry")
    {
        cout<<"play basketball";
        return  output;
    }
    if(humidity == "humid")
    {
        cout<<"Watch tv";
        return output;
    }
    }

}