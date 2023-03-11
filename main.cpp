#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    while(true){
       system("cls");
       std::cout << "Rules ig\nRock: r\nPaper: p\nScissors: s\n\n";

       srand(time(NULL));

       std::vector<std::string> list = {"r", "p", "s"};

       int fr = rand() % list.size();
       std::string rand = list[fr];

       std::string rps;
       std::cout << "r p or s? >: ";
       std::cin >> rps;
       if (rps == rand) {
            std::cout << "DRAW!";
       } else if (rps == "p" && rand == "r"||rps == "r" && rand == "s"||rps == "s" && rand == "p"){ // i think thats all idk
            std::cout << "U WON! W";
        } else {
            std::cout << "U LOST LMAO";
        } 
       std::string a;
       std::cout << "\nagain? (y/n) >: ";
       std::cin >> a;
       if (a == "y") {
       } else if (a == "n"){
           break;
       } else {
           break;
       }
    }
}
