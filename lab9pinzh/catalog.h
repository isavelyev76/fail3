#ifndef CATALOG_H
#define CATALOG_H

#include "product_subscription.h"
#include <vector>

class Catalog
{
private:
    std::vector<Product> products;

public:
    void addProduct(const Product& product);
    void displayProductsInCategory(const std::string& category) const;
    void displayProductsAbovePrice(double price) const;
    void sortProductsByDescendingQuantity();
    void sortProductsByCategoryAndPrice();
    const std::vector<Product>& getProducts() const;
};

#endif