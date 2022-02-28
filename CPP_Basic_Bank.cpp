#include<bits/stdc++.h>
using namespace std;

/********************
Account class decleared
**********************/
class account
{
private:
    int balance,num,dep,w,count=1;
    string name,u_name,u_pass,ac_no,n;
public:
    /**Inline functions are declared**/
    void intro();
    void create_account();
    void login_panel();
    void deposit();
    void withdraw();
    void all_details();

};
/**Class loan declared and single inheritance with account class**/
class loan:public account{
    int lo_amount,n_balance;
    double interest;
    string n;
    public:
        void loan_allow();

};

int main()
{
    int num;
    account obj;
    do{
        obj.intro();
        cin>>num;
        system("CLS");
        switch(num)
        {
        case 1:
            obj.login_panel();
            break;
        case 2:
            obj.create_account();
            break;
        case 3:
            cout<<endl<<endl;
            cout<<"\t\t\t\t\t\t Thank you everyone..."<<endl;
            cout<<"\t\t\t\t\t\t Happy Coding Life..."<<endl;
            break;
        }
    }while(num!=3);


}

/********************
Outline function Intro
*********************/
void account::intro()
{
    cout<<"\t\t\t\t\t===================================\n";
    cout<<"\n\t\t\t\t\t|    Welcome To Basic C++ Bank    |\n\n";
    cout<<"\t\t\t\t\t===================================\n\n";
    cout<<"\t\t\t\t\t\t    #Main Menu:"<<endl;
    cout<<"\t\t\t\t\t____________________________________"<<endl<<endl;
    cout<<"\t\t\t\tFirst create your account then going to login panel\n"<<endl<<endl;
    cout<<"\t\t\t\t\t\t   1.Login Panel"<<endl;
    cout<<"\t\t\t\t\t\t   2.Create Account"<<endl;
    cout<<"\t\t\t\t\t\t   3.Exit "<<endl<<endl;
    cout<<"\t\t\t\t\t    Select your option (1-3)...."<<endl;
    cout<<"\t\t\t\t\t    ";
}

/***************************
Outline function create account
****************************/
void account::create_account()
{
    cout<<"\t\t\t\t\t===================================\n";
    cout<<"\n\t\t\t\t\t|           Create Account        |\n\n";
    cout<<"\t\t\t\t\t===================================\n\n";
    cout<<endl<<endl;

    cout<<"\t\t\t\t\t     Enter your account no: "<<endl;
    cout<<"\t\t\t\t\t     ";
    cin>>ac_no;
    cout<<"\t\t\t\t\t     Enter your name: "<<endl;
    cout<<"\t\t\t\t\t     ";
    cin.ignore();
    getline(cin,name);
    cout<<"\t\t\t\t\t     Enter your user name: "<<endl;
    cout<<"\t\t\t\t\t     ";
    cin>>u_name;
    cout<<"\t\t\t\t\t     Enter your password: "<<endl;
    cout<<"\t\t\t\t\t     ";
    cin>>u_pass;
    cout<<"\t\t\t\t\t     Enter your initial amount: "<<endl;
    cout<<"\t\t\t\t\t     ";
    cin>>balance;

    cout<<endl<<endl;
    cout<<"\t\t\t\t\t     Account data recorded "<<endl<<endl;
    cout<<"\t\t\t\t\t     press 0 to go to Homepage"<<endl;
    cout<<"\t\t\t\t\t     ";
    cin>>num;

    if(num==0)
    {
        system("CLS");
    }
    else
    {
        cout<<"\t\t\t\t\t     You pressed wrong number "<<endl;
    }

}

/************************
Outline function login panel
*************************/

void account::login_panel()
{
    string user;
    string pass;
    cout<<"\t\t\t\t\t===================================\n";
    cout<<"\n\t\t\t\t\t|           Login Panel           |\n\n";
    cout<<"\t\t\t\t\t===================================\n";
    cout<<u_name<<endl;
    cout<<u_pass<<endl;
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t     Enter Your User Name: "<<endl;
    cout<<"\t\t\t\t\t     ";
    cin>>user;
    cout<<"\t\t\t\t\t     Enter Your Password: "<<endl;
    cout<<"\t\t\t\t\t     ";
    cin>>pass;

    if(user ==u_name &&  pass ==u_pass)
    {
        system("CLS");
start:
        cout<<"\t\t\t\t\t===================================\n";
        cout<<"\n\t\t\t\t\t|            Your Account         |\n\n";
        cout<<"\t\t\t\t\t===================================\n\n";
        cout<<endl;

        cout<<"\t\t\t\t\t        1. All details show"<<endl<<endl;
        cout<<"\t\t\t\t\t        2. Deposit"<<endl<<endl;
        cout<<"\t\t\t\t\t        3. Withdraw"<<endl<<endl;
        cout<<"\t\t\t\t\t        4. Loan"<<endl<<endl;
        cout<<"\t\t\t\t\t        5. Exit"<<endl<<endl;
        cout<<"\t\t\t\t\tPress (1 - 5) go to your desire page..."<<endl;
        cout<<"\t\t\t\t\t";
        cin>>num;
        system("CLS");
        if(num==1)
        {
            all_details();
            goto start;

        }
        else if(num==2)
        {
            deposit();
            goto start;

        }
        else if(num==3)
        {
            withdraw();
            goto start;
        }
        else if(num==4){
            loan obj;
            obj.loan_allow();
            goto start;
        }
        else if(num==5)
        {
            system("CLS");

        }

    }
    else
    {
        system("CLS");
        cout<<endl<<endl;
        cout<<"\t\t\t\t\t\tSorry password is incorrect..."<<endl;
        cout<<"\t\t\t\t\t\tPlease try again..."<<endl<<endl;
        cout<<"\t\t\t\t\t Press 0 to go to the login page...."<<endl;
        cin>>num;
        if(num==0)
        {
            system("CLS");
            login_panel();
        }
    }
}
/************************
Outline function All Details
*************************/
void account::all_details()
{
                cout<<"\t\t\t\t\t===================================\n";
                cout<<"\n\t\t\t\t\t|            All Details          |\n\n";
                cout<<"\t\t\t\t\t===================================\n\n";
                cout<<endl<<endl;

                cout<<"\t\t\t\t\t        Your account no: "<<ac_no<<endl<<endl;
                cout<<"\t\t\t\t\t        Name: "<<name<<endl<<endl;
                cout<<"\t\t\t\t\t        Total Balance: "<<balance<<endl<<endl;
}
/*********************
Outline function Deposit
**********************/
void account::deposit()
{
     start:
            cout<<"\t\t\t\t\t===================================\n";
            cout<<"\n\t\t\t\t\t|            Your Account         |\n\n";
            cout<<"\t\t\t\t\t===================================\n\n";

            cout<<"\t\t\t\t\tEnter your deposit amount: ";
            cin>>dep;

            balance=dep+balance;
            cout<<endl;
            cout<<"\t\t\t\t\tTransction: "<<count<<endl<<endl;
            cout<<"\t\t\t\t\tNow your total balance: "<<balance<<endl<<endl;
            cout<<"\n\n";
            cout<<"\t\t\t\tPress (y/n) y for more deposit and n for exit...."<<endl;
            cout<<"\t\t\t\t\t";
            cin>>n;
            if(n=="y"){
                count++;
                goto start;
            }
            else{
                system("CLS");
            }

        }
/************************
Outline function Withdraw
*************************/
void account::withdraw()
{
            start:
            cout<<"\t\t\t\t\t===================================\n";
            cout<<"\n\t\t\t\t\t|            Your Account         |\n\n";
            cout<<"\t\t\t\t\t===================================\n\n";

            cout<<"\t\t\t\t\t   Enter your withdraw amount: "<<endl;
            cout<<"\t\t\t\t\t   ";
            cin>>w;
            if(balance>=w){
                balance=balance-w;
                cout<<"\t\t\t\t\t   Transction: "<<count<<endl<<endl;
                cout<<"\t\t\t\t\t   Now your total balance: "<<balance<<endl;
                cout<<"\t\t\t\t\t   Press (y/n) y for more deposit and n for exit...."<<endl;
                cout<<"\t\t\t\t\t   ";
                cin>>n;
                if(n=="y"){
                    count++;
                    goto start;
                }
            }
            else{
                cout<<endl<<endl;
                cout<<"\t\t\t\t\tNot sufficient balance in your account"<<endl;
            }
}
/************************
Outline function login allow
*************************/
void loan::loan_allow(){
        start:
                cout<<"\t\t\t\t\t===================================\n";
                cout<<"\n\t\t\t\t\t|            Your Account         |\n\n";
                cout<<"\t\t\t\t\t===================================\n\n";
                cout<<endl<<endl;

                cout<<"\t\t\t\t\t   Enter your loan amount: "<<endl;
                cout<<"\t\t\t\t\t   ";
                cin>>lo_amount;
                interest=(0.02*lo_amount)+lo_amount;
                cout<<endl;
                cout<<"\t\t\t\t\t   With 2% interest you have to pay: "<<interest<<endl<<endl;
                cout<<"\t\t\t\t\t   You want to take this loan?(y/n)"<<endl;
                cout<<"\t\t\t\t\t   ";
                cin>>n;
                if(n=="y"){
                    system("CLS");
                    cout<<"\n\t\t\t\t\t|            Your Account         |\n\n";
                    cout<<"\t\t\t\t\t===================================\n\n";
                    cout<<endl;

                    cout<<"\t\t\t\t\t  Congratulation you got the loan "<<endl<<endl;
                }
}
