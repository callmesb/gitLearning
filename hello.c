#include <iostream>
using namespace std;

class Person{
	public:
		Person() = default;
		Person(const string& strName): name(strName), id("001"), address("") {}
		string getName() {return name;}
		string getId() {return id;}
	private:
		string name;
		string id;
		string address;
};
int main(int argc, char **argv) {
	string str = "dayang";
	Person dayang(str);
	Person xiaoyang = dayang;
	Person hello;
	hello.getName();


	cout << dayang.getId() << endl;
	return 0;
}
