#include "std_lib_facilities.h"

int main()
{
	std::cout << "Enter the name of the person you want to write to:\n";
	std::string first_name;
	// first_name is a variable of type string
	std::cin >> first_name;
	// read characters into first_name
	std::cout << "Dear " << first_name << ",\n";
	std::cout << "How are you? I'm doing fine.\n I miss you. When will you respond to me? Please do so asap.\n Hope to talk to you soon.\n";
	
	std::cout << "Enter the name of your friend's you want to ask the recipient about:\n";
	std::string friend_name;
	std::cin >> friend_name;
	std::cout << "Have you seen " << friend_name << " lately?\n";
	
	char friend_sex=0;
	std::cout << "If that friend is male write an m, or if that friend is female write an f:\n";
	std::cin >> friend_sex;

		if(friend_sex=='m')
			std::cout << "If you see " << friend_name << " please ask him to call me.\n";
		if(friend_sex=='f')
			std::cout << "If you see " << friend_name << " please ask her to call me.\n";
	
	std::cout << "Enter your friend's age: ";
	int age=1;
	std::cin >> age;
		if (age<0 || age>110)
			simple_error("you're kidding!");
			
		else
			std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";
		if(age<=12)
			std::cout << "Next year you will be " << age+1 << ".\n";
		if(age==17)
			std::cout << "Next year you will be able to vote.\n";
		if(age>70)
			std::cout << "I hope you are enjoying retirement.\n";
		
	std::cout << "Yours sincerely,\n\n\n" << "Viki\n";

	return 0;
}
