# Course App

A desktop app for tracking your courses and study time, built with C++ and Qt. Users sign in, create courses, log study hours, time study sessions, see course statistics as charts, and add friends.

## Features

- **Accounts:** sign up and log in
- **Courses:** create courses and browse them all in one place, with a page for each course
- **Study time:** log hours manually or use the built-in study timer
- **Charts:** course statistics visualized with Qt Charts
- **Friends:** add friends and view their pages
- **Help dialog**, plus loading and error dialogs

## Tech stack

- C++17, Qt (Widgets, Charts, Network), built with CMake. Qt 6 is preferred, and Qt 5 is supported by the CMake file.
- [Supabase](https://supabase.com/) as the backend, using its auth and REST APIs through `QNetworkAccessManager`. The calls live in `376_Project/database.cpp`.

## Repo layout

```
376_Project/     the Qt application
  main.cpp, mainwindow.*      application window and page switching
  loginpage.*, homepage.*     login and home screens
  allcoursespage.*, coursepage.*, coursecreatedialog.*, loghoursdialog.*, timerdialog.*
  friendpage.*, addfrienddialog.*
  database.*                  Supabase client
  userdata.*, coursedata.*, friend_data.*, course.*   data models
  *.ui                        Qt Designer layouts
376_Code/        smaller set of C++ source files (courses, users) kept alongside the app
```

## Building

You need Qt with the Charts module, CMake 3.16+ and a C++17 compiler.

**Qt Creator:** open `376_Project/CMakeLists.txt`, pick a kit and press Run.

**Command line:**

```bash
cd 376_Project
cmake -S . -B build-local
cmake --build build-local
./build-local/376_Project
```

## Backend configuration

`database.h` and `database.cpp` point at a specific Supabase project (URL and API key). To run your own copy, create a Supabase project, put its URL and anon key in those files, and create the tables the app uses (courses, plus the user profile, friend and hours data it reads and writes through the REST API).
