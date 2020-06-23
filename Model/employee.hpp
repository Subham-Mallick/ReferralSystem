//
//  employee.hpp
//  refSystem
//
//  Created by Subham Mallick on 23/06/20.
//  Copyright © 2020 Subham Mallick. All rights reserved.
//

#ifndef employee_hpp
#define employee_hpp

#include "account.hpp"
#include "jobList.hpp"

class Employee:public Account{

public:
    Employee(std::string email):Account(email){}
    void referCandidate(Candidate candidate, Job job ){
        
    }
};

#endif /* employee_hpp */
