
// Q1) Create a base class ACCOUNT WITH PRIVATE MEMBER BALANCE AND FUNCTION DEPOSITE (double amount ) Overload deposite to allow depositing two amount at once . 
// create a derived class Savings Account that has a private member interestRate and function addInterest() that increases balance . Teat all function in main().

#include<iostream>
using namespace std ;

class Account{
    private:
         double balance;

         public :
         Account(double bal = 0){
            balance = bal;
         }
         void deposite(double amount){
            balance += amount;
         }
         void deposite (double amount1, double amount2){
            balance+=(amount1+amount2);
         }
         double getBalance(){
            return balance;
         }
};

class SavingsAccount : public Account{
    private:
       double interestRate ;

       public:
       SavingsAccount(double bal , double rate ): Account(bal){
        interestRate = rate;
       }

       void addInterest(){
        double interest = getBalance()*interestRate/100;
        deposite(interest);
       }   
};

int main(){
    SavingsAccount s1(5000,5);
    cout<<"Initial Balance :"<<s1.getBalance()<<endl;

    s1.deposite(1000);
    cout<<"After depositing 1000"<<s1.getBalance()<<endl;

    s1.deposite(500,1500);
    cout<<"After depositing 500 and 1500 :"<<s1.getBalance()<<endl;
    return 0;
}