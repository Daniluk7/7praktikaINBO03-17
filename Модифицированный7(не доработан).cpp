#include <iostream>
using namespace std;
#include <string>
class Auto{
	protected:
		int cost,time;
		public:
		void make_a(int a){ time=a;}
			Auto(){
			cout << "Время "<< time << endl;	
			cost = time*14;
			cout << "Цена "<< cost << endl;
			}
	
			};
class Bus{
	protected:
	int cost1,time1;
	public:
		void make_b(int b){ time1=b;}
		Bus(){
		cout << "Время "<< time1 << endl;
			cost1 = 36;
				cout << "Цена "<< cost1 << endl;
		}
};
class Bike{
	protected:
	int cost2,time2;
	public:
		void make_c(int c){ time2=c;}
		Bike(){
			cout << "Время "<< time2 << endl;
			cost2 = 0;
			cout << "Цена "<< cost2 << endl;
		}
};
class Transport:public Auto,public Bus,public Bike{
	public:
		Transport(){
			cout << "Процесс рассчета"<<endl;
		}
	
		
		~Transport(){
		}
};
int main(){
	setlocale(LC_ALL, "Russian");
	Transport i;
	Transport();
	i.make_a(12);
	i.make_b(12);
	i.make_c(134);

	return 0;
}
