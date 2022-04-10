#ifndef Account_H
#define Account_H

#include "BaseEntityType.h"
#include <string>
class Account : public BaseEntityType{
    public:
        std::string username;
        std::string first_name;
        std::string last_name;
        std::string username;
        std::string password;
        std::string email;
        std::string phone_number;
};

#endif