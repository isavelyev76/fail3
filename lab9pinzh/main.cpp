#include <iostream>
#include "catalog.h"
#include "constants.h"
#include "file_reader.h"
#include "product_subscription.h"

using namespace std;

int main()
{
    cout << "Laboratory work #9. GIT\n";
    cout << "Variant #10. Catalog\n";
    cout << "Author: Ilya Savelyev\n";
    
    Catalog catalog;
    Product* products[MAX_FILE_ROWS_COUNT];
    int numProducts = 0;

    try
    {
        read("data.txt", products, numProducts);

        for (int i = 0; i < numProducts; i++)
        {
            catalog.addProduct(*products[i]);
        }

        // Дополнительные операции с данными

        // Освобождение памяти, выделенной для объектов Product
        for (int i = 0; i < numProducts; i++)
        {
            delete products[i];
        }
    }
    catch (const char* error)
    {
        std::cout << error << std::endl;
    }

    return 0;
}
