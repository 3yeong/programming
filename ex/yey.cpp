#include<iostream>

class LetDebug {
public:
	void printNum() {
		double s1 = 32967;
		double s2 = 1;
		double s3 = (double)s1 + s2;
		std::cout << s3 << std::endl;
	}
};

int main() {
	LetDebug* td = new LetDebug;
	td->printNum();
	std::cout<<"2018020"<<std::endl;

	system("pause");
	return 0;
}