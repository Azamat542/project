#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Console {
	string name;
	int cost;
	int Ram;
public:

	Console(string name,int cost, int Ram):name(name),cost(cost),Ram(Ram){}

	Console(){}
	 virtual void print() {
		cout << "Name:" << name << '\n' << "Cost:" << '\n' << cost << "RAM:" << Ram << endl;
	}

	
};



class Playstation : public Console {
	string type;
public:
	Playstation(string name, int cost, int Ram, string type) :Console(name,cost,Ram),type(type){}
	Playstation(){}
	void print() {
		Console::print();
		cout << "Type: " << type << endl;
		cout << "_________" << endl;
	}
};
class Xbox: public Console {
	string model;
public:
	Xbox(string name, int cost, int Ram, string model) :Console(name, cost, Ram),model(model) {}
	Xbox(){}
	void print() {
		Console::print();
		cout << "Model: " << model << endl;
		cout << "_________" << endl;
	}
};

void Read(vector<Console*>& cs) {
	ifstream file("table.csv");
	string  type,s1, s2, s3;
	
	for (int i = 0; i < 3; i++) {
		getline(file, type, ';');
		getline(file, s1, ';');
		getline(file, s2, ';');
		getline(file, s3);
		if (type == "P") cs.push_back(new Playstation(s1,stoi(s2),stoi(s3)));
		else cs.push_back(new Xbox(s1, stoi(s2), stoi(s3)));
	}
	file.close();

}
void print(vector<Console*>ts) {
	for (int i = 0; i < ts.size(); i++) {
		cout << i << ")" << endl;
		ts[i]->print();
	}
}

int main() {
	
	vector<Console*> console;
	Read(console);
	print(console);

	Playstation* p;
	Xbox* x;

	int index;
	cout << "Enter index of transport: "; cin >> index;
	string type = typeid(*console[index]).name();
	if (type == "class Playstation") p = dynamic_cast<Playstation*>(console[index]);
	else x = dynamic_cast<Xbox*>(console[index]);

}
