#include <iostream>
#include <string>
#include "lab4.h"


int main() {
    korable first(1000,"tytanik",50,"titan","grey",1120,"A");
    korable second(800,"victory",45,"zalizo","white",670,"D");
    korable third(500,"santa barbara",20,"placmasa","green",580,"C");
    first.printkorableInfo();
    second.printkorableInfo();
    third.printkorableInfo();
}
