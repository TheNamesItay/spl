//
// Created by itay on 11/20/19.
//
using namespace std;
#include "../include/Watchable.h"

Watchable::Watchable(long id, int length, const std::vector<std::string> &tags) : id(id), length(length), tags(tags){

}
string Watchable::toString() const{
    return "";
}
Watchable* Watchable::getNextWatchable(Session &) const {
    return NULL;
}
int Watchable::getId() const {
    return id;
}
int Watchable::getLength() const{
    return length;
}
vector<std::string> Watchable::getTags() const{
    return tags;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Movie::Movie(long id, const std::string &name, int length, const std::vector<std::string> &tags) : Watchable(id, length, tags), name(name) {}
string Movie::toString() const {
    string str = to_string(getId()) + " " +  name + " " + to_string(getLength()) + " minutes [";
    for(string s : getTags())
        str += s + " ,";
    str = str.substr(str.length() - 1);
    str[str.length() - 1] = ']';
    return str;
}
Watchable* Movie::getNextWatchable(Session& sess) const {
    return sess.getUser()->getRecommendation(sess);
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Episode::Episode(long id, const std::string &seriesName, int length, int season, int episode,
                 const std::vector<std::string> &tags) : Watchable(id, length, tags), seriesName(seriesName), season(season), episode(episode) {}
string Episode::toString() const {
    string str = to_string(getId()) + " " +  seriesName + " " + to_string(getLength()) + " minutes [";
    for(string s : getTags())
        str += s + " ,";
    str = str.substr(str.length() - 1);
    str[str.length() - 1] = ']';
    return str;
}
Watchable* Episode::getNextWatchable(Session &sess) const {

}
