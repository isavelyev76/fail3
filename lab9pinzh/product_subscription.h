#ifndef PRODUCT_SUBSCRIPTION_H
#define PRODUCT_SUBSCRIPTION_H

#include <string>

class Product
{
private:
    std::string category;
    std::string name;
    double price;
    int quantity;

public:
    Product(const std::string& category, const std::string& name, double price, int quantity);

    std::string getCategory() const;
    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;
};

#endif