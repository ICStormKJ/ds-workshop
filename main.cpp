#import <list>
#import <iostream>

int main(int argc, char* argv) {
    std::list<int> intList;
    for (int i = 1; i < argc; i++) {
        intList.push_back(argv[i]);
    }

    for (std::list<int>::const_iterator itr; itr != intList.end(); itr++) {
        std::cout << *itr << std::endl;
    }
}