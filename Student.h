#pragma once
#include <string>
#include <iostream>

class Student {
    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << "ID: " << student.ID
           << ", Name: " << student.NAME
           << ", College: " << student.COLLEGE
           << ", Subject: " << student.SUBJECT
           << ", Attendance: " << student.ATTENDANCE
           << ", Physics: " << student.PHYSICS
           << ", Chemistry: " << student.CHEMISTRY
           << ", Maths: " << student.MATHS;
        return os;
    }
private:
    static int nextID;
    int ID;
    std::string NAME{"-"}, COLLEGE{"-"}, SUBJECT{"-"};
    int ATTENDANCE{0}, PHYSICS{0}, CHEMISTRY{0}, MATHS{0};
public:
    Student()
        : ID(nextID++) {}

    Student(std::string name, std::string college, std::string subject,
            int attendance, int physics, int chemistry, int maths)
        : ID(nextID++), NAME{std::move(name)}, COLLEGE{std::move(college)}, SUBJECT{std::move(subject)},
          ATTENDANCE{attendance}, PHYSICS{physics}, CHEMISTRY{chemistry}, MATHS{maths} {}

    ~Student() = default;

    bool operator<(const Student& rhs) const {
        return this->ID < rhs.ID;
    }
    bool operator==(const Student& rhs) const {
        return this->ID == rhs.ID;
    }

    // Getters (optional)
    int getID() const { return ID; }
    const std::string& getName() const { return NAME; }
    const std::string& getCollege() const { return COLLEGE; }
    const std::string& getSubject() const { return SUBJECT; }
    int getAttendance() const { return ATTENDANCE; }
    int getPhysics() const { return PHYSICS; }
    int getChemistry() const { return CHEMISTRY; }
    int getMaths() const { return MATHS; }
};

// Definition of static member