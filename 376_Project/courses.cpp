#include "courses.h"

Course::Course(const QString& courseName) : name(courseName) {}

Course::~Course()
{
}

QString Course::addAssignment(const QString& name,
                                  double weight,
                                  double grade)
{
    // Name cannot be empty as it is a key identifier
    if(name.isEmpty())
        return "Grade name cannot be empty";
    // Weight range check
    if(weight < 0 || 100 < weight)
        return "Grade weight outside of range 0 to 100";
    // Score range check
    if(grade < 0 || 100 < grade)
        return "Grade outside of range 0 to 100";
    // Unique name check
    for(const Assignment& a : assignments) {
        if(a.name == name)
            return "Grade name must be unique";
    }
    // Add assignment
    assignments.push_back({name, weight, grade});
    // Recalculate overall grade
    grade = 0.0;
    for(const Assignment& i : assignments)
        grade += i.grade * (i.weight / 100.0);
    return "Grade added successfully";
}

QString Course::remAssignment(const QString& input_name)
{
    // Find assignment based on name
    for(auto i = assignments.begin(); i != assignments.end(); ++i) {
        // If name is found
        if (i->name == input_name) {
            // Delete assignment
            assignments.erase(i);
            // Recalculate overall grade
            grade = 0.0;
            for (const Assignment &j: assignments)
                grade += j.grade * (j.weight / 100.0);
            return "Grade deleted successfully";
        }
    }
    return "Grade not found";
}

QString Course::getAssignments() const
{
    QString output = "For " + name + " (Name / Weight / Score):\n";
    // Create string of name, weight, score, and new line separators
    for(const Assignment& i : assignments) {
        output += i.name;
        output += std::string(17 - i.name.length(), ' ');
        output += std::to_string(i.weight) + "%";
        output += std::string(8 - std::to_string((int)i.weight).length(), ' ');
        output += std::to_string(i.grade) + "%\n";
    }
    return output;
}
