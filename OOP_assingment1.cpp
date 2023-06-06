#include<iostream>
using namespace std;

class Cricketer{
	private:
		string name;
		int shirtno;
		string dob;
		int odi_rating;
		int test_rating;
		int t20_rating;
		int startyear;
		
		public:
			Cricketer(){
			
				string name ("/0");
				int shirtno (0);
				string dob ("/0");
				int odi_rating (0);
				int test_rating (0);
				int t20_rating (0);
				int startyear (0);
				cout<<"DEFAULT CONSTRUCTOR"<<endl;
			}
			
			Cricketer(string n, int sn, string b, int ora, int ts, int tr, int sy)
			{
				name = n;
			 	shirtno = sn;
				dob = b;
				odi_rating = ora;
				test_rating = ts;
				t20_rating = tr;
				startyear = sy;
				cout<<"PERAMITRISED CONSTRUCTOR"<<endl;
			}
};

int main()
{
	Cricketer c2("ATTA",12,"12-6-12",12,11,10,2022);
}
