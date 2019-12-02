#include <iostream>
#include <string>
#include "lab4.h"

using namespace std;
    korable::korable(int vodoemnist, string name,int konteiner,string Material,string colour,int Size,string addons) {
    this->vodoemnist = vodoemnist;
    this->name = name;
    this->konteiner = konteiner;
    this->material = Material;
    this->colour = colour;
    this->size = Size;
    this->addons = addons;
}
 korable::korable() {
}
     korable::~korable() {
}
    int korable::getvodoemnist() {
    return vodoemnist;}
    string korable::getname() {
    return name;}
    int korable::getkonteiner() {
    return konteiner;}
    string korable::getMaterial() {
    return material;}
  string korable::getcolour() {
    return colour;}
    
 void korable::printkorableInfo() {
    cout<<"vodoemnist"<<vodoemnist<<endl;
    cout<<"name"<<name<<endl;
    cout<<"konteiner"<<konteiner<<endl;
    cout<<"Material"<<material<<endl;
    cout<<"colour"<<colour<<endl;
    cout<<"Size"<<size<<endl;
    cout<<"addons"<<addons<<endl;}
