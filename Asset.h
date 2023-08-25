#ifndef Asset_H
#define Asset_H

#include <string>

class Asset {
public:
    Asset();  // Default constructor
    Asset(int value, std::string product_type);
    std::string get_product_type() const;
    int get_value() const;
    ~Asset();  
private:
    int value;
    std::string product_type;
};

#endif