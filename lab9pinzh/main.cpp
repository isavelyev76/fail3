#include <iostream>
#include <iomanip>
#include <locale>

#include "catalog.h"
#include "constants.h"
#include "file_reader.h"
#include "product_subscription.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Лабораторная работа №8. GIT\n";
    std::cout << "Вариант №0. Библиотечный абонемент\n";
    std::cout << "Автор: Сергей Ермоченко\n\n";

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

        // Вывод всех товаров в каталоге
        std::cout << "Товары в каталоге:" << std::endl;
        std::cout << std::setw(10) << "Категория" << std::setw(20) << "Наименование" << std::setw(10) << "Цена" << std::setw(10) << "Количество" << std::endl;
        std::cout << std::setfill('-') << std::setw(50) << "-" << std::setfill(' ') << std::endl;
        for (const auto& product : catalog.getProducts())
        {
            std::cout << std::setw(10) << product.getCategory() << std::setw(20) << product.getName() << std::setw(10) << product.getPrice() << std::setw(10) << product.getQuantity() << std::endl;
        }

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