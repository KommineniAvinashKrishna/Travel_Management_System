#include<bits/stdc++.h>
#include<fstream>
#include<iomanip>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
//#include<windows.h>
#include<string>
using namespace std;
void menu();

class ManageMenu
{
  protected:
      string userName;
  public:
        ManageMenu()
        {
            cout << "\n\n\n\n\n\n\n\n\n\t Enter Your Name to Continue as an Admin: ";
            cin >> userName;
            system("CLS");
            menu();
        }      
        ~ManageMenu(){}
};

class Customers
{
   public:
   string name,gender,address;
   int age, mobileNo;
   static int  cusID;
   char all[999];
   void getDetails()
   {

        ofstream out("old-customers.txt", ios::app);
        {
        cout<<"Enter Customer ID: ";
        cin>>cusID;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Mobile Number: ";
        cin>>mobileNo;
        cout<<"Enter Address: ";
        cin>>address;
        cout<<"Enter Gender: ";
        cin>>gender;
        }
        
        out<<"\nCustomer ID: "<< cusID <<"\nName: "<< name <<"\nAge: "<< age << "\n Mobile No: "<<mobileNo <<"\nAddress: "<< address <<"\n Gender: "<< gender <<endl;
        out.close();
        cout << "\n Saved \n Note: We save your details record for future purposes\n" <<endl;

   }
    void showDetails()
    {
        ifstream in("old-cusstomers.txt");
        {
            if(!in)
            {
                cout<<" File Error! "<<endl;
            }
            while((!in.eof()))
            {
                in.getline(all,999);
                cout<< all <<endl;
            }
            in.close();
        }
    }



};

int Customers :: cusID;

class Cabs
{
    public:
    int cabChoice;
    int kilometers;
    float cabCost;
   static float lastcabCost;
    void cabDetails()
    {
        cout<<"We collaborated with fastest, safest and smartest cab service around the country"<<endl;
        cout<<"------------------Krishna Cabs------------------\n"<<endl;
        cout<<"1. Rent a Standard Cab - Rs.15 per 1 KM"<<endl;
        cout<<"2. Rent a Luxury Cab - Rs.25 per 1 KM"<<endl;

        cout<<"\n To calculate the cost for your journey: "<<endl;
        cout<<"Enter which kind of cab you need: ";
        cin>>cabChoice;
        cout<<"Enter kilometers you have to travel: ";
        cin>> kilometers;

        int hireCab;
        if(cabChoice==1)
        {
            cabCost = kilometers * 15;
            cout << "\n Your tour cost " << cabCost << " rupees for a Standard Cab" << endl;
            cout << "Press 1 to hire this cab: or";
            cout<< "Press 2 to select another cab: ";
            cin>>hireCab;

            system("CLS");

            if(hireCab==1)
            {
                 lastcabCost = cabCost;
                 cout<< "\n You have successfully hired a Standard Cab" << endl;
                 
            }
            else if(hireCab==2)
            {
                cabDetails();
            }
            else{
                cout << "Invalid Input! Redirecting to previous menu \n Please Wait!"<<endl;
                sleep(1100);
                system("CLS");
                cabDetails();
            }

        }
        else 
        {
                cout << "Invalid Input! Redirecting to Main menu \n Please Wait!"<<endl;
                sleep(1100);
                system("CLS");
                menu();
        }

        cout << "\n Press 1 to Redirect Main menu";
        cin>> hireCab;
        system("CLS");
        if(hireCab==1)
        {
            menu();
        }
        else
        {
            menu();
        }
        
    }
};
float Cabs::lastcabCost;
class Booking
{
     public:
     int choiceHotel;
     int packChoice;
    static float hotelCost;
     
     void hotels()
     {
        string hotelNo[]={"Avendra","ChoiceYou","ElephantBay"};
        for(int a = 0 ; a < 3 ; a++)
        {
            cout<<a+1<<". Hotel" << hotelNo[a]<< endl;
         }
         cout<<"\n Currently we collaborated with above hotels!"<<endl;

         cout << "Press any key to back or\n Enter number of the hotel you want to book: ";
         cin >> choiceHotel;

         system("CLS");

         if(choiceHotel == 1)
         {
            cout << "---------Welcome to HOTEL AVENDRA----------\n" << endl;

            cout << "The Garden, food and beverage. Enjoy all you can drink,Stay cool and get chilled in the summer sun. " << endl;

            cout << "Packages offered by Avendra:\n" << endl;

            cout << "1.Standard Pack" << endl;
            cout << "\t All basic facilities you need just for: Rs.5000.00" <<endl;
            cout << "2.Premium pack"<<endl;
            cout << "\t Enjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\t Live a Luxury at Avendra: Rs.15000.00" <<endl;

            cout << "\n Press another key to back or\n Enter package number you want to book: ";
            cin >> packChoice;

            if(packChoice == 1)
            {
                hotelCost=5000.00;
                cout << "\n You have succesfully booked Standard Pack at Avendra" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            } 
            else if(packChoice == 2)
            {
                hotelCost=10000.00;
                cout << "\n You have succesfully booked Premium Pack at Avendra" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if(packChoice == 3)
            {
                hotelCost=15000.00;
                cout << "\n You have succesfully booked Premium Pack at Avendra" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu\n Please Wait!" << endl;
                sleep(1100);
                system("CLS");
                hotels();
            }
           
           int gotomenu;
           cout<< "\n Press 1 to redirect main menu: ";
           cin >> gotomenu;
           if(gotomenu == 1)
            menu();
            else
            menu(); 
          
          }
          else if(choiceHotel == 2)
         {
            cout << "---------Welcome to HOTEL ChoiceYou----------\n" << endl;

            cout << "The Garden, food and beverage. Enjoy all you can drink,Stay cool and get chilled in the summer sun. " << endl;

            cout << "Packages offered by ChoiceYou:\n" << endl;

            cout << "1.Standard Pack" << endl;
            cout << "\t All basic facilities you need just for: Rs.5000.00" <<endl;
            cout << "2.Premium pack"<<endl;
            cout << "\t Enjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\t Live a Luxury at ChoiceYou: Rs.15000.00" <<endl;

            cout << "\n Press another key to back or\n Enter package number you want to book: ";
            cin >> packChoice;

            if(packChoice == 1)
            {
                hotelCost=5000.00;
                cout << "\n You have succesfully booked Standard Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            } 
            else if(packChoice == 2)
            {
                hotelCost=10000.00;
                cout << "\n You have succesfully booked Premium Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if(packChoice == 3)
            {
                hotelCost=15000.00;
                cout << "\n You have succesfully booked Premium Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu\n Please Wait!" << endl;
                sleep(1100);
                system("CLS");
                hotels();
            }
           
           int gotomenu;
           cout<< "\n Press 1 to redirect main menu: ";
           cin >> gotomenu;
           if(gotomenu == 1)
            menu();
            else
            menu(); 
          
          }
          else if(choiceHotel == 3)
         {
            cout << "---------Welcome to HOTEL ElephantBay----------\n" << endl;

            cout << "The Garden, food and beverage. Enjoy all you can drink,Stay cool and get chilled in the summer sun. " << endl;

            cout << "Packages offered by ElephantBay:\n" << endl;

            cout << "1.Standard Pack" << endl;
            cout << "\t All basic facilities you need just for: Rs.5000.00" <<endl;
            cout << "2.Premium pack"<<endl;
            cout << "\t Enjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\t Live a Luxury at ElephantBay: Rs.15000.00" <<endl;

            cout << "\n Press another key to back or\n Enter package number you want to book: ";
            cin >> packChoice;

            if(packChoice == 1)
            {
                hotelCost=5000.00;
                cout << "\n You have succesfully booked Standard Pack at ElephantBay" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            } 
            else if(packChoice == 2)
            {
                hotelCost=10000.00;
                cout << "\n You have succesfully booked Premium Pack at ElephantBay" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if(packChoice == 3)
            {
                hotelCost=15000.00;
                cout << "\n You have succesfully booked Premium Pack at ElephantBay" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu\n Please Wait!" << endl;
                sleep(1100);
                system("CLS");
                hotels();
            }
           
           int gotomenu;
           cout<< "\n Press 1 to redirect main menu: ";
           cin >> gotomenu;
           if(gotomenu == 1)
            menu();
            else
            menu(); 
          
          }
          else
          {
            cout << "Invalid Input! Redirecting to Previous Menu \n Please Wait!" << endl;
            sleep(1100);
            system("CLS");
            menu();
          }


 
     }
};

float Booking:: hotelCost;

class Charges : public Booking,Cabs,Customers 
{
    public:
    void printBill()
    {
        ofstream outf("receipt.txt");
        {
            outf << "-------ABC Travel Agency------------" << endl;
            outf << "------------Receipt-----------------" << endl;
            outf << "____________________________________" << endl;

            outf <<" Customer ID: " << Customers::cusID << endl << endl;
            outf << "Description\t\t " << fixed << setprecision(2) << Booking::hotelCost << endl;
            outf << "Travel (cab) cost:\t " << fixed << setprecision(2) << Cabs::lastcabCost << endl;
          
            outf << "_____________________________________" << endl;
            outf << "Total Charge:\t \t " << fixed << setprecision(2) << Booking::hotelCost + Cabs::lastcabCost << endl;
            outf << "_____________________________________" << endl;
            outf << "--------------Thank You--------------" << endl;
        }

        outf.close();
    }   

    void showBill()
    {
        ifstream inf("receipt.txt");
        {
            if(!inf)
            {
                cout<<"File opening error!" << endl;
            }
            while(!inf.eof())
            {
                inf.getline(all,999);
                cout<< all<< endl;
            }
        }
        inf.close();

    }

};

void menu()
{
    int mainChoice;
    int inChoice;
    int gotoMenu;
    cout << "\t\t          * ABC Travels *\n"<<endl;
    cout << "------------------------------Main Menu---------------------------" << endl;
    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|\t Customer Management -> 1\t|" << endl;
    cout << "\t|\t Cabs Management     -> 2\t|" << endl;
    cout << "\t|\t Bookings Management -> 3\t|" << endl;
    cout << "\t|\t Charges & Bill      -> 4\t|" << endl;
    cout << "\t|\t Exit                -> 5\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

    cout << "\n Enter Your Choice: ";
    cin >> mainChoice;

    system("CLS");

    Customers a2;
    Cabs a3;
    Booking a4;
    Charges a5;

    if(mainChoice == 1)
    {
        cout << "------Customers--------\n" << endl;
        cout << "1. Enter New Customer" << endl;
        cout << "2. See Old Customers" <<endl;
        cout << "\n Enter Choice: ";
        cin >> inChoice;
        system("CLS");
        if(inChoice == 1)
        {
            a2.getDetails();
        } 
        else if(inChoice == 2)
        {
            a2.showDetails();
        }
        else
        {
            cout << "Invalid Input! Redirecting to Previous Menu \n Please Wait!" << endl;
            sleep(1100);
            system("CLS");
            menu();
        }

        cout << "\n Press 1 to Redirect main menu: ";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu==1)
        {
            menu();
        } 
        else
        {
            menu();
        }
    }
    else if(mainChoice == 2)
    {
        a3.cabDetails();

    }
    
    else if(mainChoice == 3)
    {
        cout << "---> Book a luxury hotel using this system <---" << endl;
        a4.hotels();    
    }
    else if(mainChoice == 4)
    {
        cout << "--->Get your receipt <---" << endl;
        a5.printBill();

        cout << "Your receipt is already printed you can get ir from file path \n"<<endl;
        cout << "To display your receipt in the screen, Enter 1: or Enter another key to back main menu: ";

        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu == 1)
        {
            system("CLS");
            a5.showBill();
            cout << "\nPress 1 to redirect main menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1)
            {
                menu();
            }
            else
            menu();

        }  
        else
        {
        system("CLS");
        menu();
        }
    }
    else if(mainChoice == 5)
    {
         cout << "---GOOD-BYE----" <<endl;
         sleep(999);
         system("CLS");
         menu();    
    }
    else
    {
        cout << "Invalid Input! Redirecting to Previous Menu \n Please Wait!" << endl;
        sleep(1100);
        system("CLS");
        menu();
    }

}

int main()
{
    ManageMenu startObj;
    return 0;
    //cout<<"hello world";
    return 0;
}
