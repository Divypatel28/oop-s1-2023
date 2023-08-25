#include <iostream>
#include "AssetPortfolio.h"

int main() {

    AssetPortfolio portfolio(3); 
    Asset asset1(1000, "Mutual Funds");
    Asset asset2(0 , "Investment");
    Asset asset3(1503000, "Building");


    portfolio.add_asset(asset1);
    portfolio.add_asset(asset2);
    portfolio.add_asset(asset3);

    std::cout << "Number of assets in the portfolio: " << portfolio.get_num_assets() << std::endl;

    if (portfolio.has_asset("Mutual Funds")) {
        std::cout << "Portfolio contains Mutual Funds." << std::endl;
    } else {
        std::cout << "Portfolio does not contain Mutual Funds." << std::endl;
    }


    Asset *asset = portfolio.get_assets();
    for (int i = 0; i < portfolio.get_num_assets(); ++i) {
        std::cout << "The Asset " << i + 1 << " Type: " << asset[i].get_product_type()
                  << "and Value is $" << asset[i].get_value() << std::endl;
    }


    return 0;
}
