#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
    private:
        std::string age; // TODO: Fix - Transformar em unsigned int?
        std::string name;
        std::string family;

    public:
        virtual void print() const;
        void print_oi() const; // TODO: Fix - Nome errado????

        void setAge(const std::string age);
        std::string getAge() const;

        void setName(const std::string name);
        std::string getName() const;

        void setFamily(const std::string family);
        std::string getFamily() const;
};

#endif