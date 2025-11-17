#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;
    result.reserve(people.size()); 

    
    for (auto& person : people) {
        person.birthday(); 

        
        if (person.isMonster()) {
            result.push_back('n');
        }
        else {
            result.push_back('y');
        }
    }

    std::reverse(result.begin(), result.end());

    return result;
}
