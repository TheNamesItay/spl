//
// Created by itay on 11/20/19.
//

#include <fstream>
#include "../include/Session.h"
#include "../include/json.hpp"
#include "../include/Watchable.h"

using namespace std;
using nlohmann::json;

Session::Session(const std::string &configFilePath) {

        ifstream stream(configFilePath);
        json myJ;
        stream >> myJ;

        for(json j : myJ["movies"])
        {
            Movie a(j[])
            content.push_back(new Movie)
        }
}
User* Session::getUser() const{
    return activeUser;
}