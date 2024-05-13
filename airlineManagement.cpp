#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void mainMenu(); // function prototype

class Management {
    public:
    Management(){
        mainMenu();
    }
};
class Details{
    public:
    static string name,gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information(){
        cout<<"\n Enter the customer ID:"; 
        cin>>cId;
        cout<<"\n Enter the name :";
        cin>>name;
        cout<<"\n Enter the age :";
        cin>>age;
        cout<<"\n Address :";
        cin>>add;
        cout<<"\n gender :";
        cin>>gender;
        cout<<"your details are saved\n"<<endl;

    }
     
};
int Details::cId;  //:: scope resolution operator
string Details::name;
string Details::gender;

class registration{
    public:
        static int choice;
        int choicel;
        int back;
        static float charges;

        void flights(){
            string flightN[]={"UAE","Canada","UK","Europe","Australia"};

            for(int a=0;a<5;a++){
                cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
            }

            cout<<"\nWelcome to the Airlines!"<<endl;
            cout<<"Press the numb of the country of which you want to baook the flight :";
            cin>>choice;

            switch (choice)
            {
            case 1:{
                cout<<"_________________Welcome to UAE emirates ________________\n"<<endl;
                cout<<"Your comfot is out priority. enjoy the journey!"<<endl;
                cout<<"following are the flights \n"<<endl;

                cout<<"1. DUB - 498"<<endl;
                cout<<"\t08-04-2024 8:00AM 10hrs Rs. 10000"<<endl;
                cout<<"2. DUB - 499"<<endl;
                cout<<"\t09-04-2024 8:00AM 10hrs Rs. 12000"<<endl;
                cout<<"3. DUB - 500"<<endl;
                cout<<"\t010-04-2024 8:00AM 10hrs Rs. 14000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choicel;

                if(choicel==1){
                    charges = 10000;
                    cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==2){
                     charges = 12000;
                    cout<<"\nYou have successfully booked the flight DUB-499"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==3){
                     charges = 14000;
                    cout<<"\nYou have successfully booked the flight DUB-500"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else{
                    cout<<"Invalid input, shifting to the previous munu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }
            }
            case 2:{
                 cout<<"_________________Welcome to Canada airlines ________________\n"<<endl;
                cout<<"Your comfot is out priority. enjoy the journey!"<<endl;
                cout<<"following are the flights \n"<<endl;

                cout<<"1. CAD - 100"<<endl;
                cout<<"\t08-04-2024 8:00AM 10hrs Rs. 10000"<<endl;
                cout<<"2. CAD - 101"<<endl;
                cout<<"\t09-04-2024 8:00AM 10hrs Rs. 12000"<<endl;
                cout<<"3. CAD - 102"<<endl;
                cout<<"\t010-04-2024 8:00AM 10hrs Rs. 14000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choicel;

                if(choicel==1){
                    charges = 10000;
                    cout<<"\nYou have successfully booked the flight CAD - 100"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==2){
                     charges = 12000;
                    cout<<"\nYou have successfully booked the flight CAD - 101"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==3){
                     charges = 14000;
                    cout<<"\nYou have successfully booked the flight CAD - 102"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else{
                    cout<<"Invalid input, shifting to the previous munu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }
            }
              
            case 3:{
                 cout<<"_________________Welcome to UK airlines ________________\n"<<endl;
                cout<<"Your comfot is out priority. enjoy the journey!"<<endl;
                cout<<"following are the flights \n"<<endl;

                cout<<"1. UK - 100"<<endl;
                cout<<"\t08-04-2024 8:00AM 10hrs Rs. 10000"<<endl;
                cout<<"2. UK - 101"<<endl;
                cout<<"\t09-04-2024 8:00AM 10hrs Rs. 12000"<<endl;
                cout<<"3. UK - 102"<<endl;
                cout<<"\t010-04-2024 8:00AM 10hrs Rs. 14000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choicel;

                if(choicel==1){
                    charges = 10000;
                    cout<<"\nYou have successfully booked the flight UK - 100"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==2){
                     charges = 12000;
                    cout<<"\nYou have successfully booked the flight UK - 101"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==3){
                     charges = 14000;
                    cout<<"\nYou have successfully booked the flight UK - 102"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else{
                    cout<<"Invalid input, shifting to the previous munu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }
            }
            case 4:{
                 cout<<"_________________Welcome to EUR airlines ________________\n"<<endl;
                cout<<"Your comfot is out priority. enjoy the journey!"<<endl;
                cout<<"following are the flights \n"<<endl;

                cout<<"1. EUR - 100"<<endl;
                cout<<"\t08-04-2024 8:00AM 10hrs Rs. 10000"<<endl;
                cout<<"2. EUR - 101"<<endl;
                cout<<"\t09-04-2024 8:00AM 10hrs Rs. 12000"<<endl;
                cout<<"3. EUR - 102"<<endl;
                cout<<"\t010-04-2024 8:00AM 10hrs Rs. 14000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choicel;

                if(choicel==1){
                    charges = 10000;
                    cout<<"\nYou have successfully booked the flight EUR - 100"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==2){
                     charges = 12000;
                    cout<<"\nYou have successfully booked the flight EUR - 101"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==3){
                     charges = 14000;
                    cout<<"\nYou have successfully booked the flight EUR - 102"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else{
                    cout<<"Invalid input, shifting to the previous munu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }
            }
            case 5:{
                 cout<<"_________________Welcome to AUS airlines ________________\n"<<endl;
                cout<<"Your comfot is out priority. enjoy the journey!"<<endl;
                cout<<"following are the flights \n"<<endl;

                cout<<"1. AUS - 100"<<endl;
                cout<<"\t08-04-2024 8:00AM 10hrs Rs. 10000"<<endl;
                cout<<"2. AUS - 101"<<endl;
                cout<<"\t09-04-2024 8:00AM 10hrs Rs. 12000"<<endl;
                cout<<"3. AUS - 102"<<endl;
                cout<<"\t010-04-2024 8:00AM 10hrs Rs. 14000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choicel;

                if(choicel==1){
                    charges = 10000;
                    cout<<"\nYou have successfully booked the flight AUS - 100"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==2){
                     charges = 12000;
                    cout<<"\nYou have successfully booked the flight AUS - 101"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else if(choicel==3){
                     charges = 14000;
                    cout<<"\nYou have successfully booked the flight AUS - 102"<<endl;
                    cout<<"\nYou can go back to main menu to get ticket<<endl";
                }else{
                    cout<<"Invalid input, shifting to the previous munu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }
            }default:{
                cout<<"Invalid input,Shifting you to the main menu !"<<endl;
                mainMenu();
                break;
            }
            }
        }
};
float registration::charges;
int registration::choice;

class ticket : public registration,Details{
    public:
    void bill(){
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"_______________XYZ Airlines____________"<<endl;
            outf<<"_______________Ticket____________"<<endl;
            outf<<"_____________________________________"<<endl;

            outf<<"Customer ID:"<<Details::cId<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl;

            if(registration::choice==1){
                destination="UAE";
            }else if(registration::choice==2){
                destination="Canada";
            }else if(registration::choice==3){
                destination="UK";
            }else if(registration::choice==4){
                destination="Europe";
            }else if(registration::choice==5){
                destination="Australia";
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost :\t\t"<<registration::charges<<endl;

        }
        outf.close();
    }

    void dispBill() {
    ifstream ifs("records.txt");
    if (!ifs) {
        cout << "File error!" << endl;
        return; 
    }

    string arr;
    while (getline(ifs, arr)) { // Read lines until end of file
        cout << arr << endl;
    }

    ifs.close();
}

};
void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t           XYZ Airlines \n"<<endl;
    cout<<"\t____________Main menu____________"<<endl;

    cout<<"\t______________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t press 1 to add the coustomer details   \t|"<<endl;
    cout<<"\t|\t press 2 for flight registration        \t|"<<endl;
    cout<<"\t|\t press 3 for ticket and cahrges         \t|"<<endl;
    cout<<"\t|\t press 4 to exit                        \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t______________________________________________"<<endl;

    cout<<"Enter the choice :";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;
    switch(lchoice){
        case 1 :{
            cout<<"______Customers_____\n"<<endl;
            d.information();
            cout<<"Press 1 to go back to Main menu :";
            cin>>back;
            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }break;
        }
        case 2 :{
            cout<<"____Book a flight using this system_____\n"<<endl;
            r.flights();
            break;
        }
        case 3 :{
            cout<<"_____Get Your Ticket____\n"<<endl;
            t.bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket";

            cin>>back;
                if(back==1){
                    t.dispBill();
                    cout<<"Press any key to go back to main menu :";
                    cin>>back;
                    if(back == 1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }
                }else{
                    mainMenu();
                }
                break;
        }
        case 4 :{
           cout<<"\n\n\t________Thank you___________"<<endl;
           break;
        }
        default:
        {
            cout<<"Invalid input, Please try again\n"<<endl;
            mainMenu();
            break;
        }
    }
}

int main(){
    Management Mobj;
    return 0;
}