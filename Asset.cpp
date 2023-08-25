#include "Asset.h"

Asset::Asset() {
    product_type= "" ;
    value= 0;
}


Asset::Asset(int value, std::string product_type)
    : value(value), product_type(product_type) {}


std::string Asset::get_product_type() const {


    return product_type;
}


int Asset::get_value() const {
    return value;
}

Asset::~Asset() {}
