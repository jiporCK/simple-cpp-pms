#include "ProductService.h"

ProductService::ProductService() : nextId(1) { 
    products.push_back(Product(nextId++, "Laptop", 999.99));
    products.push_back(Product(nextId++, "Smartphone", 599.49));
    products.push_back(Product(nextId++, "Headphones", 199.99));
 }

void ProductService::addProduct(const std::string& name, double price) {
    products.push_back(Product(nextId++, name, price)); 
}

std::vector<Product> ProductService::getAllProducts() const {

    return products;
}