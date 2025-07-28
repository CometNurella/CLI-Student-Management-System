#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <iostream>

class Student {
    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << student.ID
           << "\t" << student.NAME
           << "\t\t\t" << student.COLLEGE
           << "\t\t" << student.SUBJECT
           << "\t\t" << student.ATTENDANCE
           << "%\t\t" << student.PHYSICS
           << "\t\t" << student.CHEMISTRY
           << "\t\t" << student.MATHS;
        return os;
    }
private:
    static int nextID; // static counter for unique IDs
    std::string ID;
    std::string NAME{"-"}, COLLEGE{"-"}, SUBJECT{"-"}, ATTENDANCE{"-"}, PHYSICS{"-"}, CHEMISTRY{"-"}, MATHS{"-"};
public:
    Student()
        : ID{std::to_string(nextID++)} {}

    Student(std::string name, std::string college, std::string subject,
            std::string attendance, std::string physics, std::string chemistry, std::string maths)
        : ID{std::to_string(nextID++)}, NAME{std::move(name)}, COLLEGE{std::move(college)}, SUBJECT{std::move(subject)},
          ATTENDANCE{std::move(attendance)}, PHYSICS{std::move(physics)}, CHEMISTRY{std::move(chemistry)}, MATHS{std::move(maths)} {}

    ~Student() = default;

    bool operator<(const Student& rhs) const {
        return this->ID < rhs.ID;
    }
    bool operator==(const Student& rhs) const {
        return this->ID == rhs.ID;
    }

    // Getters which I have no idea why I would use lol
    const std::string& getID() const { return ID; }
    const std::string& getName() const { return NAME; }
    const std::string& getCollege() const { return COLLEGE; }
    const std::string& getSubject() const { return SUBJECT; }
    const std::string& getAttendance() const { return ATTENDANCE; }
    const std::string& getPhysics() const { return PHYSICS; }
    const std::string& getChemistry() const { return CHEMISTRY; }
    const std::string& getMaths() const { return MATHS; }
};

// Static nextID def
int Student::nextID = 1;

#endif // _STUDENT_H_
