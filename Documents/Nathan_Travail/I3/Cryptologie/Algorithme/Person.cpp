#include "Person.h"
#include <iostream>

using namespace std;

// Constructeurs
Person::Person():m_name("Nathan")
{
    m_message ="";
}

Person::Person(string name):m_name(name)
{
    m_message ="";
}

// Destructeur

Person::~Person()
{
}

// Getter & Setter

std::string Person::getMessage()
{
    return m_message;
};

std::string Person::getName()
{
    return m_name;
}

void Person::setMessage(string message)
{
    m_message = message;
}

void Person::setName(string name)
{
    m_name =name;
}


//Methods
Person Person::envoyerMessage(Person personne,string message)
{
    personne.setMessage(message);
    return personne;
};


