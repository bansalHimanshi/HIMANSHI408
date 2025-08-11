// #include<iostream>
// using namespace std;
// class Book
// {
//     public:
//     string title;
//     int pages;
// };
// int main()
// {
//     Book myBook;
//     myBook.title="the hobbit";
//     myBook.pages=310;
//     cout<<"tiltle = "<<myBook.title<<endl;
//     cout<<"pages = "<<myBook.pages;
// }


// #include<iostream>
// using namespace std;
// class Name
// {
//     public:
//     string name;

//     void displayName()
//     {
//         cout<<"name = "<<"Himanshi";
//     }
// };
// int main()
// {
//     Name n;
//     n.displayName();
// }

// #include<iostream>
// using namespace std;
// class book{
//     public :
//         string title;
//         int pages;
// };
// int main(){
//     cout<<"using dot opr"<<endl;
//     book b;
//     b.title="the hobbit";
//     b.pages=310;
//     cout<<"title: "<<b.title<<endl;
//     cout<<"pages: "<<b.pages<<endl;

//     cout<<"using arrow opr"<<endl;
//     book *ptr = new book;    //raw pointer 
//     ptr->title = "C++ primer";
//     ptr->pages = 900;
//     cout<<"title: "<<ptr->title<<endl;
//     cout<<"pages: "<<ptr->pages;
//     delete ptr;  
// }

// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     int rollno;
//     string name;

// };

// int main()
// {
//     Student s1;
//     s1.name="Himanshi";
//     s1.rollno=408;
//     cout<<"name="<<s1.name<<endl<<"rollno="<<s1.name;
// }


// #include<iostream>
// using namespace std;
// class Number{
//     public:
//     int value;

// };

// int main()
// {
//     Number a;
//     a.value=20;
//     Number b=a;
//     b.value=50;
//     cout<<a.value<<endl<<b.value;
// }

// #include<iostream>
// using namespace std;
// class Wallet{
//     public:
//     int balance;
// void setbalance(int amount)
// {
//     balance=amount;
// }
// void getbalance()
// {
//     cout<<"balance is:"<<balance;
// }
// };

// int main()
// {
//     Wallet w;
    
//    // w.balance=500;
//     w.setbalance(500);
//     w.getbalance();


// }

// #include<iostream>
// using namespace std;
// class Wallet{
//     public:
//     int balance;
// void setbalance(int amount)
// {
//     balance=amount;
// }
// int getbalance()
// {
//     //cout<<"balance is:"<<balance;
//     return balance;
// }
// };

// int main()
// {
//     Wallet w;
    
//    // w.balance=500;
//     w.setbalance(500);
//     cout<<w.getbalance();
// }



#include<iostream>
using namespace std;
class BankAccount
{
     private:
     int balance;
 
     public:
     BankAccount()
     {
        balance=0;
     }
     void deposit(int amount)
     {
        if(amount>0)
        {
            balance+=amount;
        }
     }

     void withdraw(int amount)
     {
       if (amount > 0 && amount <= balance)
            balance -= amount;
     }
     int getbalance()
     {
        return balance;
     }
     
};



