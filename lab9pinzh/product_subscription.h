#ifndef PRODUCT_SUBSCRIPTION_H
#define PRODUCT_SUBSCRIPTION_H

#include "constants.h"

struct Product
{
    double cost;
    int quantity;
    char category[MAX_STRING_SIZE];
    char name[MAX_STRING_SIZE];
};

#endif