#include<iostream>
using namespace std;

class cars
{
    public:
    int car_id;
    char car_company[100];
    char car_engine[100];
    char car_model[100];
    int release_year;
    void getdata();
    void putdata();
};

void cars::getdata()
{
    cout<<"********** car details ***********\n";
    cout<<"Enter car_id : ";
    cin>>car_id;
    cout<<"\nEnter company name of the car: ";
    cin>>car_company;
    cout<<"\n Enter car_engine type : ";
    cin>>car_engine;
    cout<<"\nEnter model year of the car : ";
    cin>>car_model;
    cout<<"\nEnter release_year of the car : ";
    cin>>release_year;
    cout<<"\n-----------------------------------------\n";
}

void cars::putdata()
{
     cout<<endl<<car_id<<"\t"<<car_company<<"\t"<<car_engine<<"\t"<<car_model<<"\t"<<release_year;
    //  cout<<"\n ID : "<<car_id;
    //  cout<<"\n Company Name : " <<car_company;
    //  cout<<"\n Engine Type: "<<car_engine;
    //  cout<<"\n Model Year: "<<car_model;
    //  cout<<"\n Release Date: "<<release_year;
    //  cout<<endl;
}

int main()
{
    cars car[5];
    for(int i=0;i<=2;i++)
    {
        car[i].getdata();
    }

   cout<<"this is information of car : ";
    cout<<endl<<"car_id \tCompany \tengine \tcar_model \ttrelease_year";
   for (int j = 0 ;j <=2; ++j)
   {
     car[j].putdata();
   }
}