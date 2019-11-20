//
// Created by itay on 11/20/19.
//
using namespace std;
#include "../include/User.h"
class Episode;

User::User(const std::string &name) : name(name){}

string User::getName() const {
    return name;
}

vector<Watchable*> User::get_history() const {
    return history;
}
Watchable* User::getRecommendation(Session &s) {
    /*Watchable* latestWatch = history.at(history.size());
    if(*latestWatch is-a Episode ){

    }*/
}

//----------------------------------------------------------------------------------------------------------------------

