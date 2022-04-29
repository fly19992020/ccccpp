//Chinese(gdk)
#include <iostream>
#include <ctime>
#include <string>


int com;
int num = 0;
void shitou()
{
    if (com == 0) {
        std::cout << "平" << std::endl;
    }
    else if (com == 1) {
        std::cout << "赢" << std::endl;
        num += 1;
    }
    else if (com == 2) {
        std::cout << "输" << std::endl;
    }
}


void jiandao()
{
    if (com == 0) {
        std::cout << "输";
    }
    else if (com == 1) {
        std::cout << "平";
    }
    else if (com == 2) {
        std::cout << "赢";
        num += 1;
    }
}


void bu()
{
    if (com == 0) {
        std::cout << "赢";
	num += 1;
    }
    else if (com == 1) {
	    std::cout << "输";
    }
    else if (com == 2) {
	    std::cout << "平";
    }
}


int main()
{
    std::string user;
    srand(time(NULL));
    while (true) {
	com = rand() % 3;
        std::cout << "你选什么>>";
        std::cin >> user;
        if (user == "石头") {
	        shitou();
        }
        else if (user == "剪刀") {
            jiandao();
        }
        else if (user == "布") {
            bu();
        }
        else if (user == "QUIT") {
            std::cout << num;
            break;
        }
        else {
            std::cout << "再次";
            continue;
        }
    }
    return 0;
}
