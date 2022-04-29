//English
#include <iostream>
#include <ctime>
#include <string>


int com;
int num = 0;
void shitou()
{
    if (com == 0) {
        std::cout << "I" << std::endl;
    }
    else if (com == 1) {
        std::cout << "Y" << std::endl;
        num += 1;
    }
    else if (com == 2) {
        std::cout << "N" << std::endl;
    }
}


void jiandao()
{
    if (com == 0) {
        std::cout << "N";
    }
    else if (com == 1) {
        std::cout << "I";
    }
    else if (com == 2) {
        std::cout << "Y";
        num += 1;
    }
}


void bu()
{
    if (com == 0) {
        std::cout << "Y";
	num += 1;
    }
    else if (com == 1) {
	std::cout << "N";
    }
    else if (com == 2) {
	std::cout << "I";
    }
}


int main()
{
    std::string user;
    srand(time(NULL));
    while (true) {
	com = rand() % 3;
        std::cout << "you>>";
        std::cin >> user;
        if (user == "shitou") {
	        shitou();
        }
        else if (user == "jiandao") {
            jiandao();
        }
        else if (user == "bu") {
            bu();
        }
        else if (user == "QUIT") {
            std::cout << num;
            break;
        }
        else {
            std::cout << "again";
            continue;
        }
    }
    return 0;
}
