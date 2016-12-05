#include <iostream>

using namespace std;

struct Student {
	
	string sname;
	string name;
	int M;
	int P;
	int I;

};


int main() {
	
	int n;
	cin >> n;
	double avg, avg1, avg2; 
	double sum = 0, sum1 = 0, sum2 = 0;
	Student s[n];
	 
	for(int i = 0; i < n; i++) {
		cin >> s[i].sname>> s[i].name>> s[i].M>> s[i].P>> s[i].I;
	}

	

	for(int i = 0; i < n; i++) {
		sum += s[i].M;
		sum1 += s[i].P; 
		sum2 += s[i].I;
		avg = sum/n;
		avg1 = sum1/n;
		avg2 = sum2/n;
	}

cout <<avg<<" "<<avg1<<" "<<avg2;

return 0;
}




	                                     