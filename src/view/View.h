#ifndef VIEW_H
#define VIEW_H

#include "../model/Product.h"
#include <vector>

class View {

public:
    void displayProducts(const std::vector<Product>& products) const;
    void showMessage(const std::string& message) const;

};

#endif