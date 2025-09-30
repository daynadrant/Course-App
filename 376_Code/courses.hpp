#pragma once
#include <string>
#include <vector>

struct Assignment {
    std::string name; // Assignment name (key identifier)
    double weight; // Percentage of overall course grade (20.0 = accounts for 20% of overall grade)
    double score; // Percentage scored (20.0 = scored 20% on this assignment)
};

class Course {
private:
    std::string name; // Course name (key identifier)
    bool enrolled = true; // Enrollment status (default true)
    std::vector<Assignment> assignments; // Dynamic array for assignments
    double grade = 0.0;
public:
    explicit Course(const std::string input_name);
    ~Course();

    /**
     * Function to get set enrollment to true
     */
    void enroll() {enrolled = true;}
    /**
     * Function to get set enrollment to false
     */
    void unenroll() {enrolled = false;}
    /**
     * Function to get enrollment status
     *
     * @return Is enrollment true or false
     */
    bool is_enrolled() const {return enrolled;}

    /**
     * Adds an assignment to the course and recalculates overall course grade
     *
     * @param input_name The unique name of the assignment
     * @param input_weight The weighting of the assignment relative to the course (0.0 to 100.0)
     * @param input_score The score earned on assignment (0.0 to 100.0)
     * @return Message indicating either success or failure as well as reason
     */
    std::string add_assignment(const std::string input_name, const double input_weight, const double input_score);
    /**
     * Deletes assignment from the course and recalculates overall course grade
     *
     * @param input_name The unique name of the assignment used to find it
     * @return Message indicating either success or failure as well as reason
     */
    std::string delete_assignment(std::string input_name);
    /**
     * Creates a string to display all assignment information
     *
     * @return String with line of each assignment describing its name, weight, and score
     */
    std::string get_assignments() const;

    /**
     * Function to get course name
     *
     * @return Name of course
     */
    std::string get_name() const {return name;}
    /**
     * Function to get overall course grade
     *
     * @return Grade in course
     */
    double get_grade() const {return grade;}
};