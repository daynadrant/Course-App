#ifndef COURSES_H
#define COURSES_H

#include <vector>
#include <QString>

struct Assignment
{
    QString name;
    double weight{};
    double grade{-1};
};

class Course
{
private:
    std::vector<Assignment> assignments;
    QString name;
    bool enrolled{true};
    double grade{};

public:
    Course(const QString& courseName);
    ~Course();

    /**
     * Function to get set enrollment
     */
    void setEnrolled(bool enrolled) {this->enrolled = enrolled;}

    /**
     * Function to get enrollment status
     *
     * @return Is enrollment true or false
     */
    bool getEnrolled() const {return this->enrolled;}

    /**
     * Adds an assignment to the course and recalculates overall course grade
     *
     * @param name The unique name of the assignment
     * @param weight The weighting of the assignment relative to the course (0.0 to 100.0)
     * @param grade The score earned on assignment (0.0 to 100.0)
     * @return Message indicating either success or failure as well as reason
     */
    QString addAssignment(const QString& name,
                              double weight,
                              double grade);

    /**
     * Deletes assignment from the course and recalculates overall course grade
     *
     * @param name The unique name of the assignment used to find it
     * @return Message indicating either success or failure as well as reason
     */
    QString remAssignment(const QString& name);

    /**
     * Creates a string to display all assignment information
     *
     * @return String with line of each assignment describing its name, weight, and score
     */
    QString getAssignments() const;

    /**
     * Function to get course name
     *
     * @return Name of course
     */
    QString getName() const {return this->name;}

    /**
     * Function to get overall course grade
     *
     * @return Grade in course
     */
    double getGrade() const {return this->grade;}
};

#endif // COURSES_H
