#ifndef Product_H
#define Product_H

#include "BaseEntityType.h"
#include <string>

class Product : public BaseEntityType{
    public:
        std::string name;
        std::string description;
        int account_id;    
};

#endif