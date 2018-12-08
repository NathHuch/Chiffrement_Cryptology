#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>


class Person
{
    public:
    // Builder
    Person();
    Person(std::string m_name);
    ~Person();

    // Getter & Setters
    std::string getMessage();
    std::string getName();

    void setMessage(std::string Message);
    void setName(std::string Name);

    // Methods
    Person envoyerMessage(Person personne,std::string message);

    //Atributes
    private:
    std::string m_name;
    std::string m_message;
};

#endif // PERSONNE_H
