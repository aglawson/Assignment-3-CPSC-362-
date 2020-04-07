#include <iostream>
using namespace std;

//This application follows the Call/Return design pattern

void MainMenu();
class Coffee
{
public:
    void CoffeeMenu() {
        cout << "Coffee Menu" << endl;
        cout << "O: Order Coffee" << endl;
        cout << "E: Exit to Main Menu" << endl;
        char CSelection;
        cin >> CSelection;
        switch (CSelection)
        {
        case 'O':
        case 'o':
            cout << "You chose to order coffee" << endl;
            break;
        case'E':
        case 'e':
            MainMenu();
        }
    }
};

class Shopping 
{
public:
    void ShoppingMenu() {
        cout << "Shopping Menu" << endl;
        cout << "L: Local Stores" << endl;
        cout << "O: Online Shopping" << endl;
        cout << "D: Deals" << endl;
        cout << "E: Exit to Main Menu" << endl;

        char SSelection;
        cin >> SSelection;
        switch (SSelection)
        {
        case 'L':
        case 'l':
            cout << "Local Stores" << endl;
            break;
        case 'O':
        case 'o':
            cout << "Online Shopping" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Deals" << endl;
                break;
        case 'E':
        case 'e':
            MainMenu();
        }
    }
};

class Entertainment 
{
public:
    void EntertainmentMenu() {
        cout << "T: Television" << endl;
        cout << "M: Music" << endl;
        cout << "Y: Youtube" << endl;
        cout << "N: Netflix" << endl;
        cout << "E: Exit to Main Menu" << endl;

        char ESelection;
        cin >> ESelection;
        switch (ESelection)
        {
        case 'T':
        case 't':
            cout << "Television" << endl;
            break;
        case 'M':
        case 'm':
            cout << "Music" << endl;
            break;
        case'Y':
        case 'y':
            cout << "Youtube" << endl;
            break;
        case 'N':
        case 'n':
            cout << "Netflix" << endl;
            break;
        case 'E':
        case 'e':
            MainMenu();
        default:
            break;
        }
    }
};

class Appointments
{
public:
   void AptmntMenu() {
       cout << "V: View Appointments" << endl;
       cout << "S: Schedule Appointments" << endl;
       cout << "C: Cancel Appointments" << endl;
       cout << "E: Exit to Main Menu" << endl;

       char ASelection;
       cin >> ASelection;
       switch (ASelection)
       {
       case 'V':
       case 'v':
           cout << "Viewing Appointments" << endl;
           break;
       case 'S':
       case 's':
           cout << "Scheduling Appointments" << endl;
           break;
       case'C':
       case 'c':
           cout << "Cancelling Appointments" << endl;
           break;
       case 'E':
       case 'e':
           MainMenu();
       default:
           break;
       }
    }
};

void MainMenu() {
    Coffee C;
    Shopping S;
    Entertainment E;
    Appointments A;
    cout << "C: Coffee" << endl;
    cout << "S: Shopping" << endl;
    cout << "E: Entertainment" << endl;
    cout << "A: Appointments" << endl;

    char UserSelection;
    cin >> UserSelection;
    switch (UserSelection)
    {
    case 'C':
    case 'c':
        C.CoffeeMenu();
        break;

    case 'S':
    case 's':
        //shopping menu
        S.ShoppingMenu();
        break;

    case 'E':
    case 'e':
        //Entertainment menu
        E.EntertainmentMenu();
        break;

    case'A':
    case 'a':
        //Appointments page
        A.AptmntMenu();
        break;

    default:
        break;
    }
}

int main()
{
    MainMenu();
    
    
}

