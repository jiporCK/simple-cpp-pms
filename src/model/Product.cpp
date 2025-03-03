#include "Product.h"
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

Product::Product(int id,const std::string& name, double price) 
    : id(id), name(name), price(price) {}

int Product::getId() const {
    return id;
}

double Product::getPrice() const {
    return price;
}

std::string Product::getName() const {
    return name;
}

void Product::display() const {
    std::cout << "ID: " << YELLOW << id << RESET << ", Name: " << YELLOW << name <<RESET << ", Price: " << GREEN << "$" <<RESET << YELLOW << price << RESET << std::endl ;
}