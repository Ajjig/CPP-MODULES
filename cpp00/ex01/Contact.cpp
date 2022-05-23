#include "Contact.hpp"

// GETTERS
str Contact::getDarkestSecret() {
    return (this->darkestSecret);
}
str Contact::getFirstName() {
    return (this->firstName);
}
str Contact::getLastName() {
    return (this->lastName);
}
str Contact::getNickName() {
    return (this->nickName);
}
str Contact::getPhoneNumber() {
    return (this->phoneNumber);
}

// SETTERS
void Contact::setDarkestSecret(str darkestSecret) {
    this->darkestSecret = darkestSecret;
}
void Contact::setFirstName(str firstName) {
    this->firstName = firstName;
}
void Contact::setLastName(str lastName) {
    this->lastName = lastName;
}
void Contact::setNickName(str nickName) {
    this->nickName = nickName;
}
void Contact::setPhoneNumber(str phoneNumber) {
    this->phoneNumber = phoneNumber;
}
Contact::Contact(str fname, str lname, str nname, str pnumber, str dsecret) {
    this->firstName = fname;
    this->lastName = lname;
    this->nickName = nname;
    this->phoneNumber = pnumber;
    this->darkestSecret = dsecret;
}
