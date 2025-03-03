#include "Controller.h"

Controller::Controller(ProductService& s, View& v) : service(s), view(v) {}

void Controller::addProduct(const std::string& name, double price) {
    service.addProduct(name, price);
    view.showMessage("Product added successfully");
}

void Controller::listProducts() const {
    view.displayProducts(service.getAllProducts());
}