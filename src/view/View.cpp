#include "View.h"
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

void View::displayProducts(const std::vector<Product>& products) const {
    if (products.empty()) {
        std::cout << RED << "No products available.\n" << RESET;
    } else {
        std::cout << BLUE << "\n=== Product List ===\n" << RESET;
        for (const auto& product : products) {
            product.display();
        }
    }
}

void View::showMessage(const std::string& message) const {
    std::cout << YELLOW << message << RESET << std::endl;
}
