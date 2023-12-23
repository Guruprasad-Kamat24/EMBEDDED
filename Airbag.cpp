#include<iostream>
using namespace std;
bool crashSensor();
bool seatbelSensor();
void controller();
void airbagActuator();
int main()
{

    int n;

        while(1)
        {
            cout<<"Print 1 to start the car"<<endl;
            cin>>n;
            if(n==1)
            {
               controller();
            }
        }


}
void controller()
{
    if(crashSensor()==true && seatbelSensor()==true)
    {
        airbagActuator();
    }
    exit(0);
}
bool crashSensor()
{
    int n;
    while(1)
    {
    cout<<"Enter 1 if crash detcted: "<<endl;
    cin>>n;
    cout<<"->"<<endl;
    if(n==1)
    {
        return true;
    }
    }


    return false;
}

bool seatbelSensor()
{
    int n;
    while(1)
    {
    cout<<"Enter 1 if seatbelt is fasten: "<<endl;
    cin>>n;
    cout<<"->"<<endl;
    if(n==1)
    {
        return true;
    }
    }
    return false;
}

void airbagActuator()
{
    cout<<"Airbags deployed!"<<endl;
    cout<<"*******"<<endl;
}
