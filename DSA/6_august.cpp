/*#include<iostream>
using namespace std;
class Base{
    public:
    int pub=1;
    protected:
    int prot=2;
    private:
    int pri=3;

};

class Derived:public Base{
    public:
    void accessBaseMembers(){
        cout<<pub<<endl;
        cout<<prot<<endl;
      //  cout<<pri<<endl;     (error)
    }
};
int main()
{
Base b;
cout<<b.pub;
// cout<<b.prot;            (error)
// cout<<b.pri;             (error)
Derived d;
d.accessBaseMembers();
}*/

/*#include<iostream>
using namespace std;
class Demo{
    public:
    static int counter;
    Demo(){
        counter++;
    }
};

int Demo::counter=0;
int main()
{
    Demo a,b,c;
    cout<<Demo::counter;

}*/

/*#include<iostream>
using namespace std;
class math{
    public:
    static int square(int x)
    {
        return x*x;
    }
};
int main()
{
    cout<<math::square(4);
}*/


/*#include<iostream>
using namespace std;
class Car{
    public:
    int speed;
};
int main(){
    Car c1,c2;
    c1.speed = 50;
    c2.speed = 70;
    cout<<c1.speed<<","<<c2.speed<<endl;
}*/

/*#include<iostream>
using namespace std;
class Car{
    public:
    static int totalcars;
    Car()
    {
        totalcars++;
    }
};
int Car::totalcars=0;
int main(){
    Car c1,c2;
    
    cout<<Car::totalcars;
}*/



/*#include<iostream>
using namespace std;
int counter=0;
void increase()
{
    counter++;
}
int main()
{
    increase();
    cout<<increase;
}*/

// #include<iostream>
// using namespace std;
// class SecretHolder{
//     private:
//     int secret =11;
//     public:
//     int get(){return secret;}
// };

// int main()
// {
//     SecretHolder s;
//     cout<<s.get();
// }

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     static int count;
//     student(){count++;}
// };
// int student::count=0;
// int main(){
// student s,s1,s2,s3;
// cout<<s.count;
// }