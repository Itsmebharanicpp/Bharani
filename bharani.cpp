/*Weather App
S.Bharani
Vivekanandha college of engineering for women*/
#include <iostream>
using namespace std;
class weather
{
    public:
    int choice;
    string loc; 
void getdetails()
{
    cout<<"\nWeather report!!"<<endl;
    cout<<"Location: \n1.Desert area\n2.Hill station\n3.Delta region"<<endl;
    cin>>loc;
}
};
class days:public weather
{
    public:
    void details()
    {
        cout<<"Enter your choice(1-3):"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"\nToday's report!!\nDry\nHeat waves\nTemperature:70%\nHumidity:70%"<<endl;
            break;
            case 2: cout<<"\nYesterday's report!!\nThunderstrom\nRainy\nTemperature:12°c\nHumidity:20%"<<endl;
            break;
            case 3: cout<<"\nTommorrow's report!!\nCloudy\nNot so hot\nTemperature:27°c\nHumidity:35%"<<endl;
            break;
            default: cout<<"invalid data"<<endl;
            break;
        }
    }
};
class weekly: public weather
{
    public:
    void putdetails4()
    {
        cout<<"\nWeekly weather report!!\nEnter your choice(1-7): ";
        cin>>choice;
        switch (choice)
        {case 1: cout<<"\nSunday!\nCloudy!!";
        break;
        case 2: cout<<"\nMonday!\nThunderstrom!!";
        break;
        case 3: cout<<"\nTuesday!\nRainy!!";
        break;
        case 4: cout<<"\nWednesday!\nThunderstrom!!";
        break;
        case 5: cout<<"\nThursday!\nCold breeze!!";
        break;
        case 6: cout<<"\nFriday!\nSunny!!";
        break;
        case 7: cout<<"\nSaturday!\nHeat waves!!";
        break;
        default: cout<<"\nInvalid";
        break;
            }
}
};
class monthly: public weather
{
    public:
    void putdetails5()
    { cout<<"\n\nMonthly weather report!!\nEnter the choice(1-12):";
    cin>>choice;
    switch (choice)
    {
        case 1: cout<<"\nJanuary!\nRainy!!";
        break;
        case 2: cout<<"\nFebruary!\nCold Breeze!!";
        break;
        case 3: cout<<"\nMarch!\nSunny!!";
        break;
        case 4: cout<<"\nApril!\nHot!!";
        break;
        case 5: cout<<"\nMay!\nToo hot!!";
        break;
        case 6: cout<<"\nJune!\nNot so hot!!";
        break;
        case 7: cout<<"\nJuly!\nSunny!!";
        break;
        case 8: cout<<"\nAugust!\nCloudy!!";
        break;
        case 9: cout<<"\nSeptember!\nSeems rainy!!";
        break;
        case 10: cout<<"\nOctober!\nThunderstorm!!";
        break;
        case 11: cout<<"\nNovember!\nRainy!!";
        break;
        case 12: cout<<"\nDecember!\nHeavy rain!!";
        break;
        default: cout<<"Invalid data";
        break;
    }
    }
};
int main()
{
    weather w;
    days d;
    weekly w1;
    monthly m;
    w.getdetails();
    d.details();
    w1.putdetails4();
    m.putdetails5();
    return 0;
}