#include "coursepage.h"
#include "ui_coursepage.h"

CoursePage::CoursePage(Database* database, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CoursePage)
    , database(database)
{
    ui->setupUi(this);

    // Create mock pie chart
    auto *series = new QPieSeries();
    series->append("Midterm: 20%", 20);
    series->append("Project: 40%", 40);
    series->append("Final: 40%", 40);

    auto *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Grade Distribution");
    chart->legend()->setAlignment(Qt::AlignRight);

    ui->graphicsViewChart->setChart(chart);

    chart->setTheme(QChart::ChartThemeLight);  // Optional: cleaner look
    chart->setFont(QFont("Segoe UI", 8));      // Smaller font for labels
    chart->legend()->setFont(QFont("Segoe UI", 8));
    chart->legend()->setMarkerShape(QLegend::MarkerShapeCircle);

    connect(database, &Database::populateCoursePage, this,
            [this](Course* course)
    {
        ui->courseNameLabel->setText(course->getName());
        ui->currentGradeLabel->setText("Current Grade: " + QString::number(course->getGrade()));
        ui->studyHoursLabel->setText("Course Study Hours: " + QString::number(course->getStudyHours()));

        // Set rank image
        QPixmap pixmap;
        switch(course->getRank())
        {
        case RankType::BEGINNER:
            pixmap = QPixmap(":/ranks/images/beginner.png");
            break;
        case RankType::LEARNER:
            pixmap = QPixmap(":/ranks/images/learner.png");
            break;
        case RankType::RISINGSTAR:
            pixmap = QPixmap(":/ranks/images/risingstar.png");
            break;
        case RankType::PRODIGY:
            pixmap = QPixmap(":/ranks/images/prodigy.png");
            break;
        case RankType::SCHOLAR:
            pixmap = QPixmap(":/ranks/images/scholar.png");
            break;
        }

        ui->rankLabel->setPixmap(pixmap);

        emit goToCoursePage();
    });
}

CoursePage::~CoursePage()
{
    delete ui;
}

void CoursePage::on_backButton_clicked()
{
    emit closeCoursePage();
}

