#ifndef FILE_READER_H
#define FILE_READER_H

#include <string>
#include "product_subscription.h"

void read(const std::string& filename, Product* products[], int& numProducts);

#endif