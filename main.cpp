#include <iostream>

class Snake{
    int weight;
    char name[12];

public:
    int get_weight(){
        return this->weight;
    }
    void set_weight(int b){
        this->weight = b;
    }
};

class Wolf {
    int age;
    int fang;
    char name[15];

public:
    int get_age(){
        return this->age;
    }
    void set_age(int k){
        this->age = k;
    };



    int get_fang(){
        return this->fang;
    }

    void set_fang(int white) {
        this->fang = white;
    }
};
int main() {
Wolf leader;
leader.set_fang(2);
int data = leader.get_fang();
std::cout << data<<"\t";
leader.set_age(8);
int hello = leader.get_age();
std::cout<<hello<<"\t";

Snake Kaaa;
Kaaa.set_weight(20);
int hola = Kaaa.get_weight();
std::cout << hola;


    return 0;
}
