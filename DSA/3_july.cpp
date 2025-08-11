//#include<iostream>
//using namespace std;
//namespace mymath{
//	int add(int a,int b)
//	{
//		return a+b;
//	}
//}
//int main(){
//
//int result=mymath::add(3,4);
//cout<<result;}

//#include<iostream>
//using namespace std;
//namespace outer{
//	namespace inner{
//		int x=42;
//	}
//}
//int main()
//{
//	int y=outer::inner::x;
//	cout<<;
//}

//#include<iostream>
//using namespace std;
//namespace helo{
//	void greet(){
//		std::cout<<"hi";
//		
//	}
//}
//
//int main(){
//	helo::greet();
//}


//#include<iostream>
//using namespace std;
//namespace physics{
//	double gravity(){
//		return 9.8;
//		
//	}
//}
//
//int main(){
//	std::cout<<"gravity="<<physics::gravity()<<std::endl;
//}


//#include<iostream>
//namespace A{
//	int val(){return 2;
//	}
//}
//namespace B{
//	int val(){return 5;
//	}
//}
//
//int main(){
//	std::cout<<A::val()+B::val();
//}


#include<iostream>
using namespace std;
namespace lib1{
	void calculate(){
		std::cout<<"calculating from lib1"<<endl;
	}
}
namespace lib2{
	void calculate(){
		std::cout<<"calculating from lib2";
	}
}
int main()
{
	lib1::calculate();
	lib2::calculate();
}




