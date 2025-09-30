#include "courses.hpp"

Course::Course(const std::string input_name) : name(input_name) {}

Course::~Course() {
    assignments.clear();
}

std::string Course::add_assignment(const std::string input_name, const double input_weight, const double input_score) {
    // Name cannot be empty as it is a key identifier
    if(input_name.empty())
        return "Grade name cannot be empty";
    // Weight range check
    if(input_weight < 0 || 100 < input_weight)
        return "Grade weight outside of range 0 to 100";
    // Score range check
    if(input_score < 0 || 100 < input_score)
        return "Grade outside of range 0 to 100";
    // Unique name check
    for(const Assignment& i : assignments) {
        if(i.name == input_name)
            return "Grade name must be unique";
    }
    // Add assignment
    assignments.push_back({input_name, input_weight, input_score});
    // Recalculate overall grade
    grade = 0.0;
    for(const Assignment& i : assignments)
        grade += i.score * (i.weight / 100.0);
    return "Grade added successfully";
}

std::string Course::delete_assignment(const std::string input_name) {
    // Find assignment based on name
    for(auto i = assignments.begin(); i != assignments.end(); ++i) {
        // If name is found
        if (i->name == input_name) {
            // Delete assignment
            assignments.erase(i);
            // Recalculate overall grade
            grade = 0.0;
            for (const Assignment &j: assignments)
                grade += j.score * (j.weight / 100.0);
            return "Grade deleted successfully";
        }
    }
    return "Grade not found";
}

std::string Course::get_assignments() const {
    std::string output = "For " + name + " (Name / Weight / Score):\n";
    // Create string of name, weight, score, and new line separators
    for(const Assignment& i : assignments) {
        output += i.name;
        output += std::string(17 - i.name.length(), ' ');
        output += std::to_string(i.weight) + "%";
        output += std::string(8 - std::to_string((int)i.weight).length(), ' ');
        output += std::to_string(i.score) + "%\n";
    }
    return output;
}