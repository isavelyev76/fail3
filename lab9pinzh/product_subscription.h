#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
private:
    double price;
    int quantity;
    std::string category;
    std::string name;

public:
    Product(double price, int quantity, const std::string& category, const std::string& name);

    double getPrice() const;
    int getQuantity() const;
    std::string getCategory() const;
    std::string getName() const;

    void display() const;
};

#endif