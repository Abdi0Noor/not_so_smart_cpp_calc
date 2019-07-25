#include <iostream>

	int add_nums(int num1, int num2){
	int first_num = num1;
	int second_num = num2;
	int sum = 0;

	sum = (first_num + second_num);
	
	return sum;
};

int addition_calc () {

	int user_num1 = 0;
	int user_num2 = 0;
	int user_input = 0;
	int sum = 0;
	
	std::cout << "\n\nplease enter a number: ";
	std::cin >> user_num1;
	std::cout << "Now enter a second number: ";
	std::cin >> user_num2;
	std::cout << "The sum of " << user_num1 << " + " << user_num2 << " is: " 
	<< add_nums(user_num1, user_num2) << std::endl;

	return 0;
}



int main() {
	std::string adding = "add";
	std::string user_input = "";
	std::cout << "Welcome to the console calculator" << std::endl;
	std::cout << "Do you want to  add, subtract, divide, or multiply?" << std::endl;
	std::cout << "Type: add |" << " subtract |" << " divide |" << " multiply " << std::endl;
	std::cin >> user_input;
	if (user_input == adding) {
		addition_calc();
	}
	return 0;
}