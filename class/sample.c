#include <iostream>
#include <vector>
using namespace std;

class people{
public:
	string name;
	int id;

	void put_name(string name_in){
		name = name_in;
	}

	string out_name(){
		return name;
	}
};

void change_name(people& person, string changed_name){
	person.put_name(changed_name);
}

int main(){
	people person;
	person.put_name("Taro");
	change_name(person, "Hanako");
	cout << person.out_name() << endl;

	return 0;
}
