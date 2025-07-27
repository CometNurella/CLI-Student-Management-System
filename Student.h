#include<string>
#include<iostream>
#include<memory>
class Student {
    friend std::ostream &operator<< (std::ostream &os, const Student student) {
        os << "cout <<";
        return os;
    }
    private:
        static int nextID;
        int ID;
        std::string NAME{"-"}, COLLEGE{"-"}, SUBJECT{"-"};
        int ATTENDANCE{0}, PHYSICS{0}, CHEMISTRY{0}, MATHS{0};
    public:
        Student() 
            : ID(nextID++) {}; 
        Student(std::string name, std::string college, std::string subject, int attendance, int physics, int chemistry, int maths)
            : ID(nextID++), NAME{name}, COLLEGE{college}, SUBJECT{subject}, ATTENDANCE{attendance}, PHYSICS{physics}, CHEMISTRY{chemistry}, MATHS{maths} {};
        ~Student() = default;

        bool operator< (const Student &rhs) const {
            return this->ID < rhs.ID;
        }
        bool operator== (const Student &rhs) const {
            return (this->ID == rhs.ID);
        }
    
};