#ifndef PRODUCT_SERVICE_H
#define PRODUCT_SERVICE_H

#include "../model/Product.h"
#include <vector>

class ProductService {

private:
    std::vector<Product> products;
    int nextId;

public:
    ProductService();
    void addProduct(const std::string& name, double price);
    std::vector<Product> getAllProducts() const;

};

#endif