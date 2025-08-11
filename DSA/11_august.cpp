// #include<iostream>
// using namespace std;
// class Vehicle{
//     public:
//     void start()
//     {
//          cout<<"vehicle starting"<<endl;
//     }

// };
// class Car: public Vehicle{
//     public:
//     void drive()
//     {
//         cout<<"Car driving";
//     }
// };
// int main()
// {
//     Car myCar;
//     myCar.start();
//     myCar.drive();
// }

// #include<iostream>
// using namespace std;
// class Grandparent{
//     public:
//     void legacy()
//     {
//          cout<<"grandparent's legacy"<<endl;
//     }

// };
// class Parent: public Grandparent{
//     public:
//     void guidance()
//     {
//         cout<<"parent's guidance"<<endl;
//     }
// };
// class Child: public Parent{
//     public:
//     void play()
//     {
//         cout<<"child playing";
//     }
// };
// int main()
// {
//     Child c;
//    c.legacy();
//    c.guidance();
//    c.play();
// }

// #include<iostream>
// using namespace std;
// class Father{
//     public:
//     void discipline()
//     {
//          cout<<"fathers discipline"<<endl;
//     }

// };
// class Mother{
//     public:
//     void care()
//     {
//         cout<<"mothers care"<<endl;
//     }
// };
// class Child: public Father,public Mother{
//     public:
//     void learn()
//     {
//         cout<<"child learning from parent";
//     }
// };
// int main()
// {
//     Child c;
//      c.discipline();

//    c.care();
//    c.learn();
  
// }

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void eat()
//     {
//          cout<<"Animal eating"<<endl;
//     }

// };
// class Dog: public Animal{
//     public:
//     void bark()
//     {
//         cout<<"dog barking"<<endl;
//     }
// };
// class Cat: public Animal{
//     public:
//     void meow()
//     {
//         cout<<"cat meow";
//     }
// };
// int main()
// {
//     Cat c;
//      c.eat();

//    c.bark();
//    c.meow();
  
// }

#include<iostream>
using namespace std;
class Shape{
    public:
    void s()
    {
         cout<<"shapes"<<endl;
    }

};
class Circle:public Shape{
    public:
    void care()
    {
        cout<<"mothers care"<<endl;
    }
};
class Child: public Father,public Mother{
    public:
    void learn()
    {
        cout<<"child learning from parent";
    }
};
int main()
{
    Child c;
     c.discipline();

   c.care();
   c.learn();
  
}