#include "./service/ProductService.h"
#include "./view/View.h"
#include "./controller/Controller.h"
#include <iostream>

int main() {

    ProductService service;
    View view;
    Controller controller(service, view);

    char choice;
    do {
        std::cout << "\n=== Product Management System ===\n";
        std::cout << "1. Add Product\n";
        std::cout << "2. List Products\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Ignore newline character

        switch (choice) {
            case '1': {
                std::string name;
                double price;
                std::cout << "Enter product name: ";
                std::getline(std::cin, name);
                std::cout << "Enter price: ";
                std::cin >> price;
                controller.addProduct(name, price);
                break;
            }
            case '2':
                controller.listProducts();
                break;
            case '3':
                std::cout << "Exiting program...\n";
                break;
            default:
                std::cout << "Invalid choice, try again!\n";
        }
    } while (choice != '3');

    return 0;
}