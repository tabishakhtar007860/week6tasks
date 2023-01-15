#include <iostream>
using namespace std;
string Zodiac(int day,string month);
main()
{
int day;
string month;
cout<<"enter date:";
cin>>day;
cout<<"enter month:";
cin>>month;
string result = Zodiac(day,month);
cout << result;

}
string Zodiac(int day,string month)
{
string output;
if(day <=19 && month == "april" || day >= 21 && day <=30 && month == "march" )
{
    
    
        output = "Aries";
    
}
else if(day >=20 && day <=30 && month == "april" || day <=20 && month == "may")
{
    

        output="Taurus";
    
}

else if(day <=20 && month == "june" || day >= 21 && day <=30 && month == "march" )
{
    
    
        output = "Gemini";
    
    
}
else if(day <=22 && month == "july" || day >= 21 && day <=30 && month == "june" )
{
    
    
        output = "Cancer";
    
}

else if(day <=22 && month == "august" || day >= 23 && day <=30 && month == "july" )
{
    
    
        output = "Leo";

}
else if(day <=22 && month == "september" || day >= 23 && day <=30 && month == "august" )
{
    
    
        output = "Virgo";

}

else if(day <=23 && month == "october" || day >= 23 && day <=30 && month == "september" )
{
    
    
        output = "Libra";
    
}
else if(day <=21 && month == "november" || day >= 23 && day <=30 && month == "october" )
{
    
    
        output = "Scorpio";
    
}
else if(day <=21 && month == "december" || day >= 22 && day <=30 && month == "november" )
{
    
    
        output = "Sagittarius";
    
}
else if(day <=19 && month == "january" || day >= 22 && day <=30 && month == "december")
{
    
    
        output = "Capricorn";
    
}
else if(day <=18 && month == "february" || day >= 20 && day <=30 && month == "january" )
{
    
    
        output = "Aquarius";
    
}
else if(day <=20 && month == "march" || day >= 19 && day <=30 && month == "february" )
{
    
    
        output = "Pisces";
    
}

    return output;
}