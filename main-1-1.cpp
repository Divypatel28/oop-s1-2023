#include <iostream>
#include "Asset.h"

int main() {

    // Testing the default
    Asset defaultAsset;
    std::cout << "The asset's Type is: " << defaultAsset.get_product_type()
              << "and value is $" << defaultAsset.get_value() << std::endl;


    //Test case scenario 1
    Asset customAsset(240000, "Inventory ");
    std::cout << "The asset's Type is: " << customAsset.get_product_type()
              << "and value is $" << customAsset.get_value() << std::endl;


    //Test case scenario 2
    Asset anotherCustomAsset(3450000, "Building ");
    std::cout << "The asset's type is: " << anotherCustomAsset.get_product_type()
              << "and value is $" << anotherCustomAsset.get_value() << std::endl;


    return 0;
}