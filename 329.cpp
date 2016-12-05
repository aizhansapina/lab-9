#include <iostream>

using namespace std;

struct student {
	
	string sname;
	string name;
	int math;
	int fiz;
	int inf;

};

int main() {
	
	int n;
	cin >>n;

	student c[n];

	for(int i = 0; i < n; i++) {
		cin >> c[i].sname>> c[i].name>> c[i].math>> c[i].fiz>> c[i].inf;
   	}

   	for(int i = 0; i < n; i++) {
   		if(c[i].math != 3 && c[i].math != 2 && c[i].math != 1) {
   			if(c[i].fiz != 3 && c[i].fiz != 2 && c[i].fiz != 1) {
   				if(c[i].inf != 3 && c[i].inf != 2 && c[i].inf != 1) {
   					cout <<c[i].sname<<" "<<c[i].name<<endl;   
   				}
   		   	}
   	   	}
   	}

return 0;
}

