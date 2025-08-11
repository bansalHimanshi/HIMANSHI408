// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     Student()
//     {
//         cout<<"constructor called";
//     }
// };

// int main()
// {
//     Student s1;
// }

// #include<iostream>
// using namespace std;
// class Point
// {
//     private:
//     int x;
//     int y;
//     public:
//     Point(int a,int b):x(a),y(b)
//     {
//         cout<<"Point initialized with x= "<<x<<" and y="<<y<<endl;
//     }
// };

// int main()
// {
//     Point p1(3,4);
// }


// #include<iostream>
// using namespace std;
// class Example{
//     private:
//     const int value;
//     int& ref;
//     public:
//     Example(int v,int& r):value(v),ref(r){
//         cout<<"const value= "<<value<<" reference value= "<<ref<<endl;
//     }
// };
// int main()
// {
//     int num=10;
//     Example ex(5,num);
// }

// #include<iostream>
// using namespace std;
// class Tracker{
// 	int& count;
// 	public:
// 		Tracker(int& c):count(c) {}
// 		void increment(){
// 		count++;
// 		}
		
		
// };
// int main(){
// 	int steps=0;
// 	Tracker t(steps);
// 	t.increment();
// 	t.increment();
// 	cout<<"Steps="<<steps<<"\n";
// 	}



