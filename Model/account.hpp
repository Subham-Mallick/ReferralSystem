//
//  account.hpp
//  refSystem
//
//  Created by Subham Mallick on 23/06/20.
//  Copyright © 2020 Subham Mallick. All rights reserved.
//

#ifndef account_hpp
#define account_hpp

#include <iostream>
#include <list>

#include "utility.hpp"

class Account{
protected:
    std::string account_id;
    std::string email;
public:
    Account(){
        account_id = generateID();
    }
    
    std::string getAccountId(){
        return this->account_id;
    }
    
    std::string getEmail(std::string email){
        return this->email;
    }
    
    void setEmail(std::string email){
        this->email = email;
    }
};

class Employee:public Account{
    
};

class Candidate:public Account{
};


#endif /* account_hpp */
