#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../service/ProductService.h"
#include "../view/View.h"

class Controller {
private:
    ProductService& service;
    View& view;

public:
    Controller(ProductService& service, View& view);
    void addProduct(const std::string& name, double price);
    void listProducts() const;
};

#endif