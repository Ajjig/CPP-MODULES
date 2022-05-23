#pragma once
#include <iostream>
#define str std::string

class Contact
{
    private:
        str firstName;
        str lastName;   
        str nickName;
        str phoneNumber;
        str darkestSecret;


    public:

        // GETTERS

        str getFirstName();
        str getLastName();
        str getNickName();
        str getPhoneNumber();
        str getDarkestSecret();

        // SETTERS

        Contact();
        Contact(str fname, str lname, str nname, str pnumber, str dsecret);
        void setFirstName(str firstName);
        void setLastName(str lastName);
        void setNickName(str nickName);
        void setPhoneNumber(str phoneNumber);
        void setDarkestSecret(str darkestSecret);
    
};
