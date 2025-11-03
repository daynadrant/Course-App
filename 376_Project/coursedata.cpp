#include "coursedata.h"

CourseData::CourseData() {}

void CourseData::clear()
{
    this->courses.clear();
}

void CourseData::addCourse(const QString& courseName)
{
    this->courses.push_back(courseName);
}

void CourseData::addCourse(const QString& courseName,
       double grade,
       double studyHours,
       RankType rank,
       bool enrolled)
{
    this->courses.push_back(Course(courseName, grade, studyHours,
                            rank, enrolled));
}

Course* CourseData::findCourse(const QString& courseName)
{
    // Search for course in vector
    auto course = std::find_if(this->courses.begin(), this->courses.end(),
                           [courseName](const Course& c) {
                               return c.getName() == courseName;
                           });

    if (course != courses.end())
    {
        // Return pointer to course in vector
        return &(*course);
    }

    return nullptr;
}

