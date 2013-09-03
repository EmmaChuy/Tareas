#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "Hola mundo como estas";
	cout<<"Dame la palabra :"<<endl;
	char c = 'a';
	string reemplazo = "xxx";
	
	for (int i = 0; i < (int)str.length(); ++i) {
		if(str[i]==c)
		{
			str.replace(i,1,reemplazo);
		}
	}
	
	cout << str << endl;
	return 0;
}
